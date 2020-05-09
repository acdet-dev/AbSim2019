from cases import Cases
from aStringResources import AStringResources


class LanguageConversion:
    def __init__(self):
        self.ddx_list = self.get_ddx_names()
        self.case_title_dict = Cases().pretty_ailment_names
        self.exam_string = AStringResources("create_assessments").get_by_identifier()["assess_string"]

    def get_ddx_names(self):
        """ function to initialize ddx names in original language """
        from casetext import CaseText

        ddx_list = []

        ddx_names = CaseText().cases.get(525, [])

        for j in ddx_names:
            temp = [i["ddx_name"] for i in j]
            ddx_list.append(temp[0])

        return ddx_list

    def ddx_to_new_lang(self, key, way="key"):
        ddx_dict = {self.ddx_list[0]: 'Upper Gastrointestinal Etiology',
                    self.ddx_list[1]: 'Choledocolithiasis',
                    self.ddx_list[2]: 'Pancreatitis',
                    self.ddx_list[3]: 'Cholecystitis',
                    self.ddx_list[4]: 'Mesenteric Infarction',
                    self.ddx_list[5]: 'Small Bowel Obstruction',
                    self.ddx_list[6]: 'Appendicitis',
                    self.ddx_list[7]: 'Diverticulitis',
                    self.ddx_list[8]: 'Acute Enteritis'}

        if way == "key":
            result = ddx_dict[key]
        else:
            result = list(ddx_dict.keys())[list(ddx_dict.values()).index(key)]

        return result

    def case_to_new_lang(self, key, way="key"):
        case_title_list = {
            'none n': "No Abnormalities",
            'appendix t': "Appendix Tenderness",
            'appendix g': "Appendix Tenderness with Guarding",
            'appendix r': "Appendix Tenderness with Rebound Tenderness",
            'appendix gr': "Appendix Tenderness with Guarding and Rebound Tenderness",
            'colon t': "Colon, Left Lower Tenderness",
            'colon g': "Colon, Left Lower Tenderness with Guarding",
            'gallbladder t': "Gallbladder Tenderness",
            'gallbladder g': "Gallbladder Tenderness with Guarding",
            'ugi t': "Gastric Tenderness",
            'ovary_left t': "Ovary, Left Tenderness",
            'ovary_left g': "Ovary, Left Tenderness with Guarding",
            'ovary_right t': "Ovary, Right Tenderness",
            'ovary_right g': "Ovary, Right Tenderness with Guarding",
            'pancreas t': "Pancreas Tenderness",
            'bladder t': "Urinary Bladder Tenderness",
            'hepatomegaly n': "Hepatomegaly",
            'splenomegaly n': "Splenomegaly",
            'enlarged_bladder n': "Enlarged Urinary Bladder"
        }

        if way == "key":
            result = case_title_list[key]
        else:
            result = list(case_title_list.keys())[list(case_title_list.values()).index(key)]

        return result

    def exam_string_to_new_lang(self, key, way="key"):
        title_dict = {
            "Exam": self.exam_string
        }

        if way == "key":
            result = title_dict[key]
        else:
            result = list(title_dict.keys())[list(title_dict.values()).index(key)]
        return result
