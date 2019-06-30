#!/bin/sh
# Command to update message catalog for gettext translations (scans source files):
#xgettext --from-code="utf-8" --sort-by-file --package-name="ab_sim" --output="i18n/ab_sim.pot" *.py glade/*.glade
xgettext --add-comments=TRANSLATORS --from-code="utf-8" --sort-by-file --package-name="ab_sim" --output="i18n/ab_sim.pot" *.py glade/student_ddx_interface_expanders.glade
