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
                "welcome_text": _(u"Welcome to AbSim"),
                "faculty_button": _(u"Faculty"),
                "faculty_description": _(u"Click here to configure AbSim and create assessments"),
                "student_button": _(u"Student"),
                "student_description": _(u"Demonstrate proficiency in abdominal palpation through practice and "
                                         u"assessments")
            }

        elif self.identifier == "faculty_login":

            string_resources = {
                "initial_key": _(u"Please enter the AbSim's initial key to add faculty login."),
                "initial_window_title": _(u"AbSim Initial Key"),
                "add_faculty_window_title": _(u"Add Faculty"),
                "enter_faculty_info": _(u"Please enter a user name and password."),
                "add_success_notification": _(u"Faculty Added Successfully"),
                "login_cleared": _(u"Moving to faculty interface."),
                "add_fail_notification": _(u"Faculty NOT Added"),
                "restart_process": _(u"Please Re-Enter the Initial Key."),
                "login_dialog_title": _(u"Faculty Login"),
                "login_instructions": _(u"Please enter your user name and password."),
                "login_fail_note": _(u"Login Failed"),
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
                "add_students_button": _(u"Manage Students"),
                "add_students_description": _(u"Provide AbSim Student Information"),
                "create_button": _(u"Create Assessments"),
                "create_description": _(u"Construct Custom Assessments"),
                "view_button": _(u"View Assessments"),
                "view_description": _(u"View Results and Assign Assessments")
            }

        elif self.identifier == "config_screen":

            string_resources = {
                "window_title": _(u"AbSim Configuration"),
                "notebook_first_line": _(u"Pressure"),
                "notebook_second_line": _(u"Sensitivity")
            }

        elif self.identifier == "sensitivity":
            string_resources = {
                "screen_title": _(u"Sensitivity Configuration Interface"),
                "screen_description": _(u"Set pressure pad sensitivity thresholds:"),
                "clarity_helper_1": _(u"(e.g."),  # add space end
                "clarity_helper_2": _(u"light"),  # add space end
                "clarity_helper_3": _(u"from 5 - 14"),
                "clarity_helper_4": _(u"deep"),  # add space end
                "clarity_helper_5": _(u"from 15 - 54"),
                "clarity_helper_6": _(u"too deep"),  # add space end
                "clarity_helper_7": _(u"> 55)."),
                "save_settings_instructions_1": _(u'Click "Save Sensitivity Settings" to save your choices.'),
                "save_settings_instructions_2": _(u"You may view the effects of your changes on the image to the "
                                                  u"right."),  # add space beginning
                "ghost_string": _(u'If you notice "ghost" registers of pressure, click "Tare / Zero Sensors".'),
                "tare_zero_button": _(u"Tare / Zero Sensors"),
                "save_button": _(u"Save Sensitivity Settings"),
            }

        elif self.identifier == "manage_students":
            string_resources = {
                "window_title": _(u"Manage Student Info"),
                "notebook_tab_1": _(u"Instructions"),
                "notebook_tab_2": _(u"Manage Sections"),
                "label_header": _(u"Loading Student Information"),
                "label_text_1": _(u"AbSim is set up to parse comma-separated variable files (.csv)."),
                "label_text_2": _(u"Please provide AbSim a .csv file with headers as shown below."),
                "label_text_3": _(u"If using Microsoft Excel, make sure to save your spreadsheet as a .csv file"),
                "label_text_4": _(u"(preferably in UTF-8 encoding)."),
                "label_text_5": _(u'When you are ready, click "Upload" to provide AbSim your .csv file.'),
                "button_text": _(u"Upload"),
                "view_button": _(u"View"),
                "delete_button": _(u"Delete"),
                "column_header": _(u"Section"),
                "column_header_2": _(u"Number of Students"),
                "column_header_3": _(u"Last Name"),
                "column_header_4": _(u"First Name"),
                "column_header_5": _(u"ID"),
                "no_data": _(u"Section Data Not Found"),
                "no_data_message": _(u"Please check back when you have entered section data."),
                "no_section_selected": _(u"No Section Selected"),
                "no_section_description": _(u"Please select a section to view, edit, and delete information."),
                "no_student_selected": _(u"No Student Selected"),
                "no_student_description": _(u"Please select a student to view, edit, and delete information."),
                "warning": _(u"Delete Information"),
                "warning_message": _(u"Are you sure you wish to delete the selected information?"),
                "no_delete": _(u"Information Not Deleted"),
                "no_delete_message": _(u"AbSim will not delete information and associated data."),
            }

        elif self.identifier == "file_chooser":
            string_resources = {
                "window_title": _(u"AbSim File Chooser"),  # use twice
                "section_title": _(u"Section"),  # add trailing space
                "success_notification": _(u"Class Uploaded Successfully"),
                "success_description": _(u"Students may now login to view exams you assign."),
                "failure_notification": _(u"Class Upload Failed"),
                "failure_description": _(u"Section information not provided."),
                "any_files": _(u"Any files"),
                "text_files": _(u"Text files"),
                "choose_folder": _(u"Please choose a folder")
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
                "assess_string": _(u"Assessment"),  # add trailing space
            }

        elif self.identifier == "view_performance":
            string_resources = {
                "window_title": _(u"View Assessments"),
                "notebook_tab_1": _(u"Assessments"),
                "column_header": _(u"Assessment Title"),
                "column_header_2": _(u"Assigned To"),
                "column_header_3": _(u"Completed"),
                "notebook_tab_2": _(u"Baseline Palpation"),
                "notebook_tab_3": _(u"Abnormality Detection"),
                "notebook_tab_4": _(u"Case Diagnosis"),
                "view_button": _(u"View"),
                "assign_button": _(u"Assign"),
                "delete_button": _(u"Delete"),
                "choose_title": _(u"Choose Section(s)"),
                "choose_description": _(u"Select section name(s) to display results for that (those) section(s)."),
                "choose_sections": _(u"Select section name(s) to which to assign assessment."),
                "results_button": _(u"Results"),
                "baseline_text": _(u"Baseline Assessment: "),
                "ab_text": _(u"Abnormality Detection: "),
                "ddx_text": _(u"Case Diagnosis: "),
                "base_text": _(u"Select assessment to view items assigned."),
                "info_string": _(u"No Section(s) Selected"),
                "secondary": _(u"Please select section(s) to view student performance."),
                "section_helper": _(u"Section"),  # add trailing space
                "no_students_error": _(u"No Sections Exist"),
                "please_add": _(u"Please add students in previous screen."),
                "warning": _(u"Delete Assessment"),
                "warning_message": _(u"Are you sure you wish to delete the selected assessment?"),
                "no_delete": _(u"Assessment Not Deleted"),
                "no_delete_message": _(u"AbSim will not delete assessment and associated data."),
                "no_data": _(u"Assessment Data Not Found"),
                "no_data_message": _(u"Please check back when students have taken assessments."),
                "assigned": _(u"Assessment Assignment Successful"),
                "assigned_description": _(u"Students in section(s) assigned may take this assessment."),
                "already_assigned": _(u"Assessment Already Assigned"),
                "already_description": _(u"The chosen section is already assigned this assessment."),
                "no_assessment_selected": _(u"No Assessment Selected"),
                "no_assess_description": _(u"Please select an assessment to assign, view results, or delete.")
            }

        elif self.identifier == "exam_model":
            string_resources = {
                "success": _(u"Assessment Saved Successfully"),
                "success_explanation": _(u"Students may now take your assessment."),
                "failure": _(u"Assessment Save Failure"),
                "failure_explanation_1": _(u"Could not save assessment."),
                "failure_explanation_2": _(u"Could not save assessment because no assessment title entered.")
            }

        elif self.identifier == "assessment_viewer":
            string_resources = {
                "failure_title": _(u"No Assessments Taken"),
                "failure_description": _(u"Please check back when students have taken your assessment."),
                "column_header_1": _(u"Student ID"),
                "column_header_2": _(u"Score"),
                "column_header_3": _(u"Time Elapsed"),
                "export_title": _(u"Assessment Data Exported"),
                "export_description": _(u"A CSV file with assessment data was created in AbSim's directory."),
                "export_failure": _(u"Assessment Data Not Exported"),
                "export_fail_description": _(u"Something went wrong."),
                "export_button_text": _(u"Export to Desktop")
            }

        elif self.identifier == "sim_screen_student":
            string_resources = {
                "self_learning_button": _(u"Self-directed Learning"),
                "self_description": _(u"Learn and Practice Abdominal Palpation"),
                "view_button": _(u"View Assignments"),
                "view_description": _(u"Take Assigned Assessments"),
                "request_id": _(u"Please enter your ID"),
                "login_window": _(u"Student Login"),
                "login_fail": _(u"Login Failed"),
                "fail_description": _(u"Entered ID does not match our records.")
            }

        elif self.identifier == "view_assignments":
            string_resources = {
                "window_title": _(u"AbSim Assignment Viewer"),
                "ab_option": _(u"Abnormality Assessment"),
                "ddx_option": _(u"Case Text Assessment"),
                "baseline_option": _(u"Baseline Assessment"),
                "view_option": _(u"View Assessments"),
                "column_header": _(u"Assessment Title"),
                "column_header_2": _(u"Ailment"),
                "welcome_string": _(u"Welcome to AbSim's Assessment Interface"),
                "instruction_string": _(u'Select an assessment and click "Begin Assessment" when ready.'),
                "begin_button": _(u"Begin Assessment"),
                "no_assessment": _(u"Assessment Not Found."),
                "finish_string": _(u"You may take another assessment if you have more to take."),
                "select_button": _(u"Select Assessment"),
                "select_description": _(u'Please select an assessment and click "Begin Assessment".'),
                "finish_title": _(u"Assessment Finished"),
                "baseline_text": _(u"Perform a baseline assessment and click 'OK' when finished."),
                "ok_button": _(u"Ok"),
                "make_selection_button": _(u"Make Selection"),
                "no_selection": _(u"No Selection"),
                "no_string": _(u"Please select a case.")
            }

        elif self.identifier == "menu":
            string_resources = {
                "home": _(u"Home"),
                "locales": _(u"System Language"),
                "menu_tab_1": _(u"Baseline Assessment"),
                "menu_tab_2a": _(u"Milestone 1:"),
                "menu_tab_2b": _(u"Depth of Palpation"),
                "menu_tab_3a": _(u"Milestone 2:"),
                "menu_tab_3b": _(u"Surface Area Coverage"),
                "menu_tab_4": _(u"Comparative Assessment"),
                "menu_tab_5a": _(u"Milestone 3:"),
                "menu_tab_5b": _(u"Abnormality Detection"),
                "menu_tab_6a": _(u"Milestone 4:"),
                "menu_tab_6b": _(u"Self-Assessment with"),
                "menu_tab_6c": _(u"Random Ailments"),
                "menu_tab_7a": _(u"Milestone 5:"),
                "menu_tab_7b": _(u"Diagnosis Integration"),
                "menu_tab_7c": _(u"with Hx/PE")
            }

        elif self.identifier == "coverage_assessment":
            # add label resource flag at end
            string_resources = {
                "welcome_string_a": _(u"Welcome!"),
                "welcome_string_b": _(u"AbSim will train you on abdominal palpation, a key skill to"),  # add space
                "welcome_string_c": _(u"assess patients complaining of abdominal pain."),
                "ready_string": _(u"When you are ready, perform an abdominal exam."),
                "click_string": _(u"Click the button when you're done."),
                "reveal_button_string": _(u"Reveal completed exam"),
                "appendix_region": _(u"Appendix Region"),
                "colon_region": _(u"Colon Region"),
                "gallbladder_region": _(u"Gallbladder Region"),
                "gastric_region": _(u"Gastric/Epigastric Region"),
                "left_ovary_region": _(u"Left Ovary Region"),
                "right_ovary_region": _(u"Right Ovary Region"),
                "pancreatic_region": _(u"Pancreatic Region"),
                "normal_bladder": _(u"Normal Urinary Bladder"),
                "liver_region": _(u"Liver Region"),
                "splenic_region": _(u"Splenic Region"),
                "distended_bladder": _(u"Distended Urinary Bladder"),
                "proceed_text": _(u"You may now proceed to Milestone 1"),
                "compare_text": _(u"Now it's time to compare your pre-assessment to your skill after training."),
                "pre_label": _(u"Pre-Assessment Coverage"),
                "post_label": _(u"Post-Assessment Coverage"),
                "proceed_button": _(u"Proceed to Abnormality Detection"),
                "visual_label": _(u"Coverage Visualization"),
                "comparison_label": _(u"Detailed Comparison"),
                "analysis_label": _(u"Location Analysis"),
                "not_label_lower": _(u"not palpated"),
                "lightly_label": _(u"lightly palpated"),
                "deeply_label": _(u"deeply palpated"),
                "too_hard": _(u"too hard")
            }

        elif self.identifier == "depth_trainer":
            string_resources = {
                "instruction_text": _(u"In this milestone, practice palpating to the correct depth."),
                "gray_circles": _(u"Gray circles indicate"),  # add spaces before and after
                "gray_explanation": _(u"appropriate for beginning an abdominal exam,"),  # add trailing space
                "gray_explanation_2": _(u"but insufficient to detect significant abdominal disorders."),
                "blue_circles": _(u"Blue circles indicate"),  # add spaces before and after
                "blue_explanation": _(u"good for detecting serious disorders of the abdomen."),
                "red_circles": _(u"Red circles indicate"),  # add spaces before and after
                "red_explanation": _(u"causing unnecessary pain, even in a patient with no abnormalities."),  # add t
                "red_ex_2": _(u"This can result in voluntary guarding for the rest of the exam, leading to"),  # add t
                "red_ex_3": _(u"confusing findings."),
                "sense_adjust": _(u"Instructors may adjust pressure sensitivity in the"),  # add space
                "sense_adjust_2": _(u"Settings > Pressure Sensitivity"),
                "sense_adjust_3": _(u"menu.")
            }

        elif self.identifier == "coverage_trainer":
            string_resources = {
                "instruction_a": _(u"Now that you can palpate to proper depth, practice covering the entire abdomen."),
                "instruction_b": _(u"It's better to make several passes instead of covering each centimeter in one "
                                   u"pass."),
                "instruction_c": _(u"Make several trips around the abdomen to get full coverage."),
                "instruction_d": _(u"Especially ensure you check the marked locations, where abdominal abnormalities "
                                   u"are most likely to occur.")
            }

        elif self.identifier == "abnormality_detection":
            string_resources = {
                "instruction_a": _(u"You should now understand what a normal abdomen feels like."),
                "instruction_b": _(u"For this milestone, familiarize yourself with how these abnormalities feel."),  # t
                "instruction_c": _(u"In the next step, you will identify them using touch and sound.")
            }

        elif self.identifier == "self_practice":
            string_resources = {
                "instruction_a": _(u"For this milestone, you will report the findings by feel and sound only."),
                "instruction_b": _(u"When you select a finding, you will receive feedback and have a second chance "
                                   u"to palpate."),
                "instruction_c": _(u"When you are confident in eliciting findings, we will integrate patient "
                                   u"history and non-palpitory physical findings."),
                "instruction_d": _(u"Before moving on, re-familiarize yourself with how this condition feels."),
                "correct_label": _(u"Correct"),
                "incorrect_label": _(u"Incorrect"),
                "chosen_label": _(u"You selected:"),
                "correct_selection": _(u"Correct selection:"),
                "none_label": _(u"Unremarkable Abdomen"),
                "none_text": _(u"No Abnormalities"),
                "appendix_label": _(u"Appendix"),
                "tender_label": _(u"Tenderness"),
                "app+g": _(u"Appendix Tenderness + Guarding"),
                "app+r": _(u"Appendix Tenderness + Rebound Tenderness"),
                "app+g+r": _(u"Appendix Tenderness + Guarding + Rebound Tenderness"),
                "bladder_label": _(u"Bladder"),
                "bladder_t": _(u"Bladder Tenderness"),
                "colon_label": _(u"Colon"),
                "colon_t": _(u"Colon Tenderness"),
                "colon_t+g": _(u"Colon Tenderness + Guarding"),
                "gallbladder_label": _(u"Gallbladder"),
                "gallbladder_t+g": _(u"Gallbladder Tenderness + Guarding"),
                "gastric_label": _(u"Gastric"),
                "gastric_t": _(u"Gastric Tenderness"),
                "ovary_left": _(u"Ovary, Left"),
                "ovary_left_g": _(u"Ovary, Left + Guarding"),
                "ovary_right": _(u"Ovary, Right"),
                "ovary_right_g": _(u"Ovary, Right + Guarding"),
                "pancreas": _(u"Pancreas"),
                "organ_enlargement": _(u"Organ Enlargement"),
                "organs": _(u"Organs"),
                "next_label": _(u"Next Case"),
                "hep": _(u"Hepatomegaly"),
                "splen": _(u"Splenomegaly"),
                "enlarged": _(u"Enlarged Urinary Bladder")
            }

        elif self.identifier == "ddx_practice":
            string_resources = {
                "choice_string_1": _(u"You chose the"),
                "choice_string_2": _(u"best diagnosis"),
                "best_1": _(u"Best diagnosis"),
                "best_2": _(u"below"),
                "next_button": _(u"Next Case")
            }

        elif self.identifier == "splash_screen":
            string_resources = {
                "splash_message_1": _(u"AbSim is loading..."),
                "splash_message_2": _(u"(this might take 30 seconds)")
            }

        elif self.identifier == "sim_label":
            string_resources = {
                "disconnected_label": _(u"Pressure pad is not connected! Please check the USB cable, close software, "
                                        u"and turn off AbSim for five seconds.")
            }

        elif self.identifier == "dont_touch":
            string_resources = {
                "warning": _(u"Setting up new case."),
                "warning_2": _(u"DO NOT TOUCH!")
            }

        elif self.identifier == "exam_model":
            string_resources = {
                "success": _(u"Assessment Saved Successfully!"),
                "continue": _(u"Students may now take your assessment."),
                "failure": _(u"Assessment Save Failure!"),
                "fail_explanation": _(u"Could not save assessment."),
                "fail_explanation_2": _(u"Could not save assessment because no assessment title entered.")
            }

        elif self.identifier == "i18n_trans":
            string_resources = {
                "message_1": _(u"New locale override"),  # add trailing space
                "message_2": _(u"will take effect after restarting the program.")  # add leading space
            }

        elif self.identifier == "reset_messages":
            string_resources = {
                "reset": _(u"Reset User Info?"),
                "reset_2": _(u"Would you like to reset the user info provided?")
            }

        elif self.identifier == "simLogin":
            string_resources = {
                "password": _(u"Password"),
                "user_name": _(u"User Name"),
                "user_entry": _(u"User Entry")
            }

        # append to dictionary ubiquitous button and screen text
        if self.back_flag:
            string_resources["back_button"] = _(u"Go Back")

        if self.label_flag:
            string_resources["palpation"] = _(u"Palpation")
            string_resources["not_label"] = _(u"Not Palpated")
            string_resources["light_label"] = _(u"Light Palpation")
            string_resources["deep_label"] = _(u"Deep Palpation")
            string_resources["too_deep_label"] = _(u"Too Deep")

        return string_resources




