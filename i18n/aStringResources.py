from i18ntrans2 import _


class AStringResources:
    """ Class to handle request of strings; for translation purposes """
    def __init__(self, identifier, back_flag=False, label_flag=False):
        self.identifier = identifier
        self.back_flag = back_flag  # default set to False
        self.label_flag = label_flag  # default set to False

    def get_by_identifier(self):
        """ Function to handle string requests. So we do not keep initializing with all string data """
        if self.identifier == "initial":

            string_resources = {
                "welcome_text": _(u"Welcome to AbSim!"),
                "faculty_button": _(u"Faculty"),
                "faculty_description": _(u"Click here to configure AbSim and create assessments"),
                "student_button": _(u"Student"),
                "student_description": _(u"Demonstrate proficiency in abdominal palpation through practice and "
                                         u"assessments")
            }

        elif self.identifier == "faculty_login":

            string_resources = {
                "initial_key": _(u"Please enter the AbSim's initial key to add faculty login."),
                "intial_window_title": _(u"AbSim Initial Key"),
                "add_faculty_window_title": _(u"Add Faculty"),
                "enter_faculty_info": _(u"Please enter a user name and password."),
                "add_success_notification": _(u"Faculty Added Successfully"),
                "login_cleared": _(u"Moving to faculty interface."),
                "add_fail_notification": _(u"Faculty NOT Added"),
                "restart_process": _(u"Please Re-Enter the Initial Key."),
                "login_dialog_title": _(u"Faculty Login"),
                "login_instructions": _(u"Please enter your user name and password."),
                "login_fail_notification": _(u"Login Failed"),
                "login_failed_1": _(u"Username and Password do not match our records."),
                "login_failed_2": _(u"No info provided or Cancel clicked."),
                "reset_instructions": _(u"Please enter the AbSim's initial key to reset faculty login."),
                "data_deletion_notification": _(u"Faculty Login Data Deleted"),
                "data_deletion_instructions": _(u'To add another faculty member, click "Faculty."')
            }

        elif self.identifier == "sim_screen_faculty":

            string_resources = {
                "config_button": _(u"Configure AbSim"),
                "config_description": _(u"Customize Sensor Pad Pressure Settings"),
                "add_students_button": _(u"Add Students"),
                "add_students_description": _(u"Provide AbSim Student Information"),
                "create_button": _(u"Create Assessment"),
                "create_description": _(u"Construct and Assign Custom Assessments"),
                "view_button": _(u"View Student Performance"),
                "view_description": _(u"View Student Scores on Assigned Assessments")
            }

        elif self.identifier == "config_screen":

            string_resources = {
                "notebook_first_line": _(u"Pressure"),
                "notebook_second_line": _(u"Sensitivity"),
                "screen_title": _(u"Sensitivity Configuration Interface"),
                "screen_description": _(u"Set pressure pad sensitivity thresholds:"),
                "clarity_helper_1": _(u"(e.g."),  # add space end
                "clarity_helper_2": _(u"light"),  # add space end
                "clarity_helper_3": _(u"from 5 - 14"),
                "clarity_helper_4": _(u"deep"),  # add space end
                "clarity_helper_5": _(u"from 15 - 54"),
                "clarity_helper_6": _(u"too deep"),  # add space end
                "clarity_helper_7": _(u"> 55)."),
                "save_settings_instructions_1": _(u"Click 'Save Sensitivity Settings' to save your choices."),
                "save_settings_instructions_2": _(u"You may view the effects of your changes on the image to the "
                                                  u"right."),  # add space beginning
                "ghost_string": _(u"If you notice 'ghost' registers of pressure, click 'Tare / Zero Sensors'."),
                "tare_zero_button": _(u"Tare / Zero Sensors"),
                "save_button": _(u"Save Sensitivity Settings"),
            }

        elif self.identifier == "file_chooser":
            string_resources = {
                "window_title": _(u"AbSim File Chooser"),  # use twice
                "section_name_dialog": _(u"Class Section Name"),
                "section_dialog_instructions": _(u"Provide AbSim a class section identifier (i.e. Section 1)."),
                "success_notification": _(u"Class Uploaded Successfully"),
                "success_description": _(u"Students may now login to view exams you assign."),
                "failure_notification": _(u"Class Upload Failed"),
                "failure_description": _(u"Section information not provided.")
            }

        elif self.identifier == "create_assessments":
            string_resources = {
                "window_title": _(u"AbSim Assessment Creator"),
                "option_1_title": _(u"1. Baseline Assessment"),
                "option_1": _(u"Add Baseline Assessment?"),
                "option_2_title": _(u"2. Abnormality Detection Assessment"),
                "option_3_title": _(u"3. Case Assessment"),
                "input_title_entry": _(u"Input Assessment Title"),
                "save_button": _(u"Save Assessment"),
            }

        elif self.identifier == "view_performance":
            string_resources = {
                "notebook_tab_1": _(u"Assessments"),
                "column_header": _(u"Assessment Title"),
                "notebook_tab_2": _(u"Baseline Palpation"),
                "notebook_tab_3": _(u"Abnormality Detection"),
                "notebook_tab_4": _(u"Case Diagnosis"),
                "view_button": _(u"View"),
                "assign_button": _(u"Assign"),
                "choose_title": _(u"Choose Section(s)"),
                "choose_description": _(u"Select section name(s) to display results for that (those) section(s)."),
                "results_button": _(u"Results"),
                # add more for added processes
            }

        elif self.identifier == "assessment_viewer":
            string_resources = {
                "failure_title": _(u"No Assessments Taken"),
                "failure_description": _(u"Please check back when students have taken your assessment."),
                "column_header_1": _(u"Student ID"),
                "column_header_2": _(u"Score"),
                "column_header_3": _(u"Time Elapsed"),
                "export_title": _(u"Exam Data Exported"),
                "export_description": _(u"A CSV file with exam data was created in AbSim's directory."),
                "export_button_text": _(u"Export to Desktop")
            }

        # append to dictionary ubiquitous button and screen text
        if self.back_flag:
            string_resources["back_button"] = _(u"Go Back")

        if self.label_flag:
            string_resources["not_label"] = _(u"Not Palpated")
            string_resources["light_label"] = _(u"Light Palpation")
            string_resources["deep_label"] = _(u"Deep Palpation")
            string_resources["too_deep_label"] = _(u"Too Deep")

        return string_resources




