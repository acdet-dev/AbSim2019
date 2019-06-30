_realname=AbSim
pkgbase=mingw-w64-${_realname}
pkgname="${MINGW_PACKAGE_PREFIX}-${_realname}"
pkgver=2.0
pkgrel=2
arch=('any')
pkgdesc="A text editor for GNOME (mingw-w64)"
depends=("${MINGW_PACKAGE_PREFIX}-adwaita-icon-theme"
         "${MINGW_PACKAGE_PREFIX}-enchant"
         "${MINGW_PACKAGE_PREFIX}-gsettings-desktop-schemas"
         "${MINGW_PACKAGE_PREFIX}-gtksourceview3"
         "${MINGW_PACKAGE_PREFIX}-iso-codes"
         "${MINGW_PACKAGE_PREFIX}-libpeas"
         "${MINGW_PACKAGE_PREFIX}-pygobject-3.0")
makedepends=("${MINGW_PACKAGE_PREFIX}-gcc"
             "${MINGW_PACKAGE_PREFIX}-pkg-config"
             "${MINGW_PACKAGE_PREFIX}-python3"
             "${MINGW_PACKAGE_PREFIX}-vala"
             "${MINGW_PACKAGE_PREFIX}-PyGnome"
             "${MINGW_PACKAGE_PREFIX}-gtk-doc"
             "intltool"
             "itstool"
             "gettext-devel"
             "yelp-tools")
options=('strip' 'staticlibs')
license=("GPL")
url="https://www.gnome.org"
install=${_realname}-${CARCH}.install
source=(https://download.gnome.org/sources/${_realname}/${pkgver%.*}/${_realname}-${pkgver}.tar.xz
        'autogen.sh::https://git.gnome.org/browse/gedit/plain/autogen.sh?id=f4a2fb948b38beb7fd7491788f1c80eeed99db6c')
sha256sums=('f174be0958ce63771fef9a81d06da6769358dab8705364a6abb5c7d10ec8211d'
            '62fb5cd2726160dbc40b8de345a7e2d68a921da6eb4b8103c40fbd5d9e317483')

prepare() {
  cd "${srcdir}"/${_realname}-${pkgver}

  cp "${srcdir}"/autogen.sh .
  NOCONFIGURE=1 ./autogen.sh
}

build() {
  [[ -d build-${MINGW_CHOST} ]] && rm -rf build-${MINGW_CHOST}
  mkdir -p build-${MINGW_CHOST}
  cd build-${MINGW_CHOST}

  export MSYS2_ARG_CONV_EXCL="</"
  export PYTHON=${MINGW_PREFIX}/bin/python3
  ../${_realname}-${pkgver}/configure \
    --host=${MINGW_CHOST} \
    --target=${MINGW_CHOST} \
    --build=${MINGW_CHOST} \
    --prefix=${MINGW_PREFIX} \
    --libexecdir=${MINGW_PREFIX}/lib \
    --disable-updater \
    --disable-schemas-compile \
    --enable-python
  make
}

package() {
  cd "${srcdir}/build-${MINGW_CHOST}"
  make DESTDIR=${pkgdir} install

  install -Dm644 "${srcdir}/${_realname}-${pkgver}/COPYING" "${pkgdir}${MINGW_PREFIX}/share/licenses/${_realname}/COPYING"
}