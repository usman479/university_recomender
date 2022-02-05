void merit(float);
void render();
void universitiesavailable();
void karachiunis(char);
void lahoreunis(char);
void islamabadunis(char);
int percentagevalidator(float);

void merit(float inter_percentage)
{
    float matric_percentage;
    float expected_score;
    printf("Enter Matric Percentage: ");
    if(0 == scanf("%f", &matric_percentage)){
        printf("Invalid input");
        exit(0);
    }
    
    printf("Enter Expected Percentage: ");
    if(0 == scanf("%f", &expected_score)){
        printf("Invalid input");
        exit(0);
    }
    
    float matric_weight = matric_percentage * 0.10;
    float inter_weight = inter_percentage * 0.40;
    float expected_weight = expected_score * 0.50;
    float final = matric_weight + inter_weight + expected_weight;
    printf("Final %.2f", final);
}

void render()
{

    FILE *ptr;
    ptr = fopen("myfile.txt", "rb");
    for (int i = 0; i < count; i++)
    {
        fread(&universities[i], sizeof(struct Uni), 1, ptr);
    }
    fclose(ptr);
}

void universitiesavailable()
{
    int flag = 1;
    printf("********** Universities Available For You **********\n\n");
    for (int i = 0; i < count; i++)
    {
        if (user_percentage >= universities[i].percentage && (strcmp(strlwr(user_city), universities[i].city)) == 0)
        {

            for (int j = 0; j < 3; j++)
            {
                if ((strcmp(strlwr(user_program), universities[i].programs[j])) == 0)
                {
                    flag = 0;
                    printf("University: %s", universities[i].name);
                    printf("  City: %s", universities[i].city);
                    printf("  Programs: %s\n", universities[i].programs[j]);
                }
            }
        }
    }
    if (flag)
    {
        printf("******* You are no eligible for any university *******\n\n");
        exit(0);
    }
}

void karachiunis(char input)
{
    switch (input)
    {
    case 'N':
    case 'n':
        printf("********Welcome To NED University********\nThe NED University of Engineering & Technology is a public university located in the urban area of Karachi, Sindh, Pakistan.\n It is one of the oldest engineering universities in Pakistan. \nFounded as Prince of Wales Engineering College, it was renamed after Parsi landowner Nadirshaw Edulji Dinshaw.\nRanking: Top 10 in Sindh.\n Fee: 30,000 PKR.\nDegree Duration: 4 Years\n Sector: Public.\n Address: Main University Rd, NED University Of Engineering & Technology, Karachi, Karachi City, Sindh 75270.\n");
        break;

    case 'F':
    case 'f':
        printf("********Welcome To FAST University********\nFounded as a Federally Chartered University in July 2000, the National University of Computer and Emerging Sciences\n is a premiere University of Pakistan, renowned for quality and impact of its students\n in the development of local software and other industries.\n The university has five modern campuses at Karachi, Lahore, Islamabad, Peshawar and Chiniot-Faisalabad.\n These campuses provide world class educational environment and recreational facilities to about over 11,000 students,\n around one quarter are female and over 500 skilled faculty members.\nRanking: Top 3 in Sindh.\n Fee: 250,000 PKR.\nDegree Duration: 4 Years\n Sector: Non-Profite Private.\nAddress: St-4, Sector 17-D, National Hwy 5, Karachi, Karachi City, Sindh");
        break;

    case 'S':
    case 's':
        printf("********Welcome To SZABIST********\nThe Shaheed Zulfikar Ali Bhutto Institute of Science and Technology is a private institute\n with multiple campuses in the residential and commercial areas of Pakistan\n especially in the heart of Pakistan, Karachi, Islamabad, and United Arab Emirates.\n Its main campus is located in Karachi, Sindh, Pakistan.\nRanking: Top 15 in Sindh.\n Fee: 120,000 PKR.\nDegree Duration: 4 Years\n Sector: Private.\n Address: SZABIST 99, 100, 153, 154 and F79?, 3rd Ave, Block 5 Clifton, Karachi, 75600.\n");
        break;

    case 'B':
    case 'b':
        printf("********Welcome To Bahria University********\nBahria University is a Federally Chartered Public Sector University.\n The principal seat of Bahria University is at Islamabad and campuses are at Islamabad, Karachi and Lahore.\n Bahria University was established by the Pakistan Navy in 2000, and since then it has steadily grown into one of the leading\n higher education institutions in Pakistan. It plays a major role in grooming future leaders \nwho can make a positive difference to the world around them.\n Bahria is a comprehensive university having multidisciplinary programs that includes\n Health Sciences, Engineering Sciences, Computer Sciences, Management Sciences, Social Sciences, Law, Earth and Environmental Sciences, Psychology and Maritime Studies.\nRanking: Top 20  in Sindh.\n Fee: 150,000 PKR.\nDegree Duration: 4 Years\n Sector: Public.\n Address: 13 National Stadium Rd, Karsaz Faisal Cantonment, Karachi, Karachi City, Sindh\n");
        break;

    case 'D':
    case 'd':
        printf("********Welcome To DHA SUFFA UNIVERSITY********\nDHA Suffa University is a non-profit private sector university named after Suffah of Masjid-e-Nabwi.\n It is located in the Phase VII of Defence Housing Authority, Karachi, in Sindh, Pakistan.\n The university received its Charter in 2002 and started operations in 2012.\nRanking: Top 15 in Sindh.\n Fee: 100,000 PKR.\nDegree Duration: 4 Years\n Sector: Non-Profit Private.\n Address: Ph-VII? DG-78, Off Khayaban-e-Tufail? Ext? Phase 7 Ext Karachi, Karachi City, Sindh 75500\n");
        break;
    default:
        printf("Invalid Entry");
        exit(0);
    }
}

void lahoreunis(char input)
{
    switch (input)
    {
    case 'P':
    case 'p':
        printf("********Welcome To PUCIT********\nPunjab University College of Information Technology is a college of computer science and information technology\n at the University of the Punjab located in Lahore, Pakistan. \nRanking: Top 3 in Punjab .\n Fee: 150,000 PKR.\nDegree Duration: 4 Years\n Sector: Public.\n Address:Katchery Road? Near Anarkali Bazar, Lahore, 54000\n");
        break;

    case 'F':
    case 'f':
        printf("********Welcome To FAST********\nFounded as a Federally Chartered University in July 2000, the National University of Computer and Emerging Sciences\n is a premiere University of Pakistan, renowned for quality and impact of its students\n in the development of local software and other industries.\n The university has five modern campuses at Karachi, Lahore, Islamabad, Peshawar and Chiniot-Faisalabad.\n These campuses provide world class educational environment and recreational facilities to about over 11,000 students,\n around one quarter are female and over 500 skilled faculty members.\nRanking: Top 3 in Sindh.\n Fee: 250,000 PKR.\nDegree Duration: 4 Years\n Sector: Non-Profite Private.\nAddress: 852-B Milaad St, Block B Faisal Town, Lahore, Punjab 54770");
        break;

    case 'U':
    case 'u':
        printf("********Welcome To UET********\nThe University of Engineering and Technology, Lahore is a public university located in Lahore, Punjab, Pakistan \nspecializing in science, technology, engineering and mathematics subjects. \nIt is the oldest and one of the most selective engineering institutions in Pakistan. \nRanking: Top 15 in Pakistan.\n Fee: 280,000 PKR.\nDegree Duration: 4 Years\n Sector: Public.\n Address: G. T. Road, Staff Houses Engineering University Lahore, Lahore, Punjab 39161\n");
        break;

    default:
        printf("Invalid entry");
        exit(0);
    }
}

void islamabadunis(char input)
{
    switch (input)
    {
    case 'N':
    case 'n':
        printf("********Welcome To NUST********\nIt has since played a key role in the development of standardization in education of fields\n such as engineering, mathematics, and technology in Pakistan and\n is widely known for its innovation and academic strength, making it one of the most prestigious \ninstitutions of higher learning in Pakistan.\nRanking: Top 3 in Pakistan .\n Fee: 300,000 PKR.\nDegree Duration: 4 Years\n Sector: Public.\n Address:PNEC Road, PNS Jauhar Karsaz Faisal Cantonment, Karachi, Karachi City, Sindh.\n");
        break;

    case 'C':
    case 'f':
        printf("********Welcome To COMSAT********\nThe COMSATS University Islamabad, formerly known as COMSATS Institute of Information Technology, is a public university in Pakistan. It is a multi-campus university with its principal seat located in Islamabad. Comsats was envisioned as Pakistan's first exclusive Institute of Information Technology. \nRanking: Top 10 in Pakistan.\n Fee: 250,000 PKR.\nDegree Duration: 4 Years\n Sector: Public.\nAddress: Park Rd, Islamabad, Islamabad Capital Territory 45550");
        break;

    case 'S':
    case 's':
        printf("********Welcome To Quaid-e-Azam University********\nQuaid-I-Azam University Islamabad, founded as University of Islamabad, is a public research university in Islamabad, Pakistan. \nRanking: Top 15 in Sindh.\n Fee: 120,000 PKR.\nDegree Duration: 4 Years\n Sector: Private.\n Address: Quaid-e-Azam University, Islamabad Capital Territory 15320\n");
        break;

    case 'B':
    case 'b':
        printf("********Welcome To Bahria University********\nBahria University is a Federally Chartered Public Sector University.\n The principal seat of Bahria University is at Islamabad and campuses are at Islamabad, Karachi and Lahore.\n Bahria University was established by the Pakistan Navy in 2000, and since then it has steadily grown into one of the leading\n higher education institutions in Pakistan. It plays a major role in grooming future leaders \nwho can make a positive difference to the world around them.\n Bahria is a comprehensive university having multidisciplinary programs that includes\n Health Sciences, Engineering Sciences, Computer Sciences, Management Sciences, Social Sciences, Law, Earth and Environmental Sciences, Psychology and Maritime Studies.\nRanking: Top 20  in Sindh.\n Fee: 150,000 PKR.\nDegree Duration: 4 Years\n Sector: Public.\n Address: Shangrilla Rd, E-8/1 E 8/1 E-8, Islamabad, Islamabad Capital Territory\n");
        break;

    default:
        printf("Invalid entry");
        exit(0);
    }
}

int percentagevalidator(float a)
{
    if (a <= 100 && a >= 0)
    {
        return 0;
    }
    return 1;
}