import logging


class ExamParser():
    def __init__(self, flag, title):
        self.flag = flag
        self.title = title

    def get_assigned_to(self):
        from totake import ToTake

        tt = ToTake()
        assigned_to = tt.get_by_exam_id(self.title)

        return assigned_to

    def get_exam_info(self, flag, key):
        import exammodel
        if flag == 'all':
            exam_model = exammodel.ExamModel()

            exam_info = exam_model.get_all(key)

        else:
            exam_model = exammodel.ExamModel()

            exam_info = exam_model.get_by_exam_id(key)

        return exam_info

    def parse_exam_info(self, case_list):
        # find out what is on exam
        if len(case_list) > 1:
            case_list_comm = case_list[1].split('+')
            case_title_list = case_list[2].split('+')
        else:
            case_list_comm = case_list[1]
            case_title_list = case_list[2]

        # check for baseline
        if 'Baseline' in case_title_list:
            case_list_comm.pop(0)
            case_title_list.pop(0)
            import baselinemodel
            baseline_model = baselinemodel.BaselineModel()
            baseline_flag = True

        else:
            baseline_model = ''
            baseline_flag = False

        # find ddx items
        ddx_cases = [case[4:] for case in case_title_list if 'ddx_' in case]
        print(ddx_cases)
        print(case_list_comm)
        case_list_comm = case_list_comm[:len(case_list_comm)-len(ddx_cases)]
        print(case_list_comm)

        return case_list_comm, case_title_list, baseline_model, baseline_flag, ddx_cases
