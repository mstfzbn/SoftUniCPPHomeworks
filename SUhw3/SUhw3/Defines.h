#pragma once
#define GUEST_TEACHER_COURSES_COUNT 20   //constant used in GuestTeacher.h [unable to create an array without some constant, some compilators can]
#define MAX_STUDENTS 65535
#define MAX_TEACHERS 65535
#define MAX_GUEST_TEACHERS 65535

#define DEBUG_MODE                       //constant which activate and deactivate Debug mode[shows messages from all classes destructors]






enum userChoiceOptions
{
	Other,
	Get_Data_For_Student_With_ID,
	Get_Data_For_Teacher_With_ID,
	Get_Data_For_Guest_Teacher_With_ID,
	Add_Data_For_New_Student,
	Add_Data_For_New_Teacher,
	Add_Data_For_New_Guest_Teacher,
	Exit
};
