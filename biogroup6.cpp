#include<iostream>
using namespace std;
int main()
{

bool show = true;
while (show == true)
{

	cout<<"\n                        ...............................................Biotechnnology in Agriculture...............................................................................";
	cout<<endl;
	cout<<endl;
	cout<<endl;
	cout<<"A man without food for three days will quarrel, for a week will fight and for a month or so will die"<<endl;
	cout<<endl;
	cout<<endl;
	cout<<"What do you wanna know about agriculture? (GIVE OPTION)"<<endl;
	cout<<"CLICK 1:Field crop"<<endl;
	cout<<"CLICK 2:Croping pattern"<<endl;
	int option;		char again;
int c;
	do
	{  cin>>option;

		switch(option)
		{	case 1:
				{//code for case 1
				int a;
				cout<<endl;
				 cout<<"Field crop"<<endl;
				cout << "Choose options"<< endl;
				cout<<"CLICK 1:For knowing about rice"<<endl;
				cout<<"CLICK 2:For knowing about wheat"<<endl;
				do
{
    cin >> a;
}while (a >3 || a < 1);
				if (a == 1) { int b;
						cout<<"Click following numbers for knowing about the species. "<<endl;
						cout<<endl;
						cout<<"1:Sona Masuri(BPT 3291)"<<endl;
						cout<<"2:Semi-dwarf IR36"<<endl;
						cout<<"3:Pusa Indian Basmati Rice"<<endl;
						cout<<"4:dubraj rice"<<endl;
						cout<<"5:Sabarmati rice"<<endl;
						cout<<endl;
						do
{
    cin >> b;
}while (b >5 || b < 1);
						if(b == 1) { cout << "Sona Masuri  is a medium-grain rice."<<endl;
                            cout<<"GROWN LARGELEY  IN = Andhra Pradesh, Telangana and Karnataka."<<endl;
                        cout<<"It is lightweight and aromatic. This premium variety of rice is mainly exported to USA, Canada, Europe, Australia, Singapore, Malaysia, and Middle East countries such as Saudi Arabia, UAE, and Qatar."<<endl;
                        cout<<"A 45-gram serving of dry sona masoori rice, which is equivalent to about 1 cup of cooked rice, contains 160 calories"<<endl;
                        cout<<"Soil required:Red and yellow soil"<<endl;
                        cout<<"Average rainfall -600-1000mm"<<endl;}
						else if (b == 2) { cout <<"This varities Help us in bring green revolution in india .it also surplus our rice"<<endl;
                             cout<<"CHARACTERISTICS : highly resistant to a number of the major insect pests and diseases that raised farmers' rice yields and drove down prices of the staple food for Asian families."<<endl;
                             cout<<" MATURING PERIOD = IR36 matures rapidly – 105 days compared to 130 days for IR8 and 150–170 days for traditional types – and produces the slender grain preferred in many countries."<<endl;
                             cout<<"SUCCESS OF THIS CROP=The combination of these characteristics soon made IR36 one of the most widely planted food crop varieties worldwide in just a few years."<<endl;
                             cout<<"SOIL TYPE REQUIRED = Red soil and yellow soil,black soil,alluvial soil"<<endl;
                            cout<<"RAINFALL REQ=500-700mm"<<endl;}
						else if (b == 3) { cout << "PUSA Basmati Rice is the 2nd entrant in the long grain basmati rice family. It is a hybrid rice variety grown in Haryana & Punjab region of India. It is a thin rice grain with average grain length of 7.35 MM – 7.5 MM & the elongation ratio of the grain is 2.5 times. It is available in Brown, Raw/ White, Steam, Sella/ Parboiled & Golden Sella rice forms. The main difference between Traditional Basmati Rice and Pusa Basmati Rice lies in the length of the grain. Pusa Basmati rice is longer than the Traditional Basmati Rice before and after cooking. The grain of Pusa Basmati rice is thinner than Traditional Basmati Rice."<<endl;
                                 cout<<"Temperature req=20 - 35oC"<<endl;
                                cout<<"Soil tex req=Rice is grown in all types of soils. However, soils capable of holding water for longer periods such as heavy neutral soils ( clay, clay loam and loamy) are most suited for its cultivation. It is grown normally in soils with soil reaction (pH) ranging from 5.0 to 8.0. Saline or alkaline soils adversely affects its growth and productivity."<<endl;
                                cout<<"Harvesting period=In early and medium duration varieties 25 to 30 days after flowering and 35 – 40 days after in late varieties are considered proper stage of harvesting."<<endl;}
						else if (b == 4) { cout << "Dubraj rice"<<endl;
						cout<<"Dubraj is a variety of rice. It is an aromatic short to medium grain rice. It is a traditional Indian cultivar with intermediate amylose and gelatinization temperature. It is most common in Madhya Pradesh and Chhattisgarh, mainly Bilaspur This rice paddy is longer than the normal rice like hmt, sarna.The rise aroma is very much fantastic."<<endl;}
						else if (b == 5 ) { cout << "Sharbati Indian Basmati Rice"<<endl;
cout<<"Sharbati Rice is a long grain rice considered as one of the low cost basmati rice variety in India. It is grown in Haryana, Punjab & Uttar Pradesh region of India. Sharbati Basmati Rice, as the name suggests is actually sweet in taste & non-sticky in nature. It comes with an average grain length of 6.9 MM – 7.1 MM. The elongation ratio of the grain is 2 times if cooked well. It is available in Raw/ white, Steam, Sella/ Parboiled & Golden Sella rice forms. It is ideal for customers who want to buy something similar to basmati but in a less price."<<endl;}
					}
				else if (a == 2) {cout << "click following numbers for wheat varities"<<endl;
				cout<<"1.Wheat: HS 542 (Pusa Kiran)"<<endl;
				cout<<"2.Wheat: HS 542 (Pusa Kiran)"<<endl;
				cout<<"3.Wheat: HDCSW 18"<<endl;
				cout<<"4.Wheat: HD 3117"<<endl;
cout<<"5.Wheat: HD 4728 (Pusa Malvi)"<<endl;
cout<<"6.Sonalika"<<endl;
cout<<endl;

							do
{

    cin >> c;
}while (c >6 || c < 1);
							if (c == 1) {cout << " Sonalika"<<endl;
							cout<<"Year of release : 2015 "<<endl;
cout<<"Characteristics : A semi-dwarf variety with grain yield potential of 6.03 t/ha under rain fed situations. HS 542 has good chapatti and bread making qualities. The variety is resistant to stripe and leaf rust . "<<endl;
cout<<"Average yield : 3.3 t/ha"<<endl;
cout<<"Production conditions : Early sown rainfed"<<endl;
cout<<"Recommended areas : North Eastern Hills" << endl;}
							else if (c == 2){cout <<"Wheat: HW 1098 (Nilgiri  Khapli)"<<endl;
cout<<"Year of release : 2015"<<endl;
cout<<"Characteristics :A high yielding, semi-dwarf (85 cm)  dicoccum wheat variety with yield potential of 4.78 t/ha and high degree of resistance  to stem, leaf and yellow rust. HW 1098 produced bold grain (40.3g), with better grain quality (>13% protein and 3.7 ppm β carotene) "<<endl;
cout<<"Average yield : 4.55 t/ha"<<endl;
cout<<"Production conditions : Timely sown irrigated."<<endl;
cout<<"Recommended areas : Dicoccum growing regions of India" << endl;}
							else if (c == 3 ) {cout << "Wheat: HDCSW 18"<<endl;
cout<<"Year of release : 2015"<<endl;
cout<<"Characteristics : This is the first variety of the country bred specifically for CA. It has genetic yield potential of more than 7t/ha. It out yielded the checks like HD 2967, PBW 550 and DBW 17 under CA by 11.13 to 20.74 % in NCR. It is resistant to high temperature at seedling stage. It escape high temperature at maturity due to early seeding. It is highly resistant to brown rust and has lower incidence of Karnal bunt. "<<endl;
cout<<"Average yield : 6.28 t/ha "<<endl;
cout<<"Production conditions : Early sown irrigated conditions under conservation agriculture (CA) environment."<<endl;
cout<<"Recommended areas : NCR/Delhi state." << endl;}
							else if (c == 4) {cout << "Wheat: HD 3117"<<endl;
cout<<"Year of release : 2015"<<endl;
cout<<"Characteristics : It has genetic yield potential of 5.5 t/ha. Average yield of this variety under late sown (after 15 th Dec.) is  4.78 t/ha  under tilled condition and 4.79 t/ha under conservation agriculture condition. It is free from brown and yellow rust under natural condition and highly tolerant to Karnal bunt. Grain protein content is 11.7 %. "<<endl;
cout<<"Average yield : 4.7 t/ha"<<endl;
cout<<"Production conditions : Late sown irrigated conditions under conservation agriculture (CA) environment. "<<endl;}

                            else if (c == 5) {cout << "Wheat: HD 4728 (Pusa Malvi)"<<endl;
cout<<"Year of release : 2015"<<endl;
cout<<"Characteristics : A semi-dwarf (90 cm), 120 days maturing durum wheat variety with genetic yield potential of 6.8 t/ha. The variety has high degree of resistance to leaf and stem rust diseases. Its  has bold and lustrous grains and superior quality traits for end-use in semolina-based industry. "<<endl;
cout<<"Average yield : 5.42 t/ha"<<endl;
cout<<"Production conditions : Timely sown irrigated."<<endl;
cout<<"Recommended areas : Central Zonee."<<endl;}
                           else if (c == 6) {cout << "Sonalika "<<endl;
cout<<"It is a wheat variety  suitable for  late sown  and irrigated conditions.   It gives an average yield of  36-40 qtls/ha.   The variety normally takes  early (126-134 days) to mature.   On maturity the plants of the variety attains a height of  80-90 cms.  Its protein contents is 12-13 percent. "<<endl;
cout<<"Grain Characteristics-Its grain is   amber  in color,   hard in texture,   oblong  in shape  and  bold in size.  The brush hair length is  prominent. Its germ width is   medium   and grain crease is  medium. "<<endl;
cout<<"Quality Characteristics-The thousand grain weight for this variety is  45-50 gms.    Its reaction to phenol is  dark.  The variety has 80 kg hecto litre wt.  Its sedimentation value is 30-60 ml.  The potential yield of this variety is 41-45 qtls/ha.  "<<endl;
cout<<"Special Feature-The variety may be grown in  Eastern UP  of India. "<<endl;}
else if (a == 3) {cout << "click following numbers for millet varities"<<endl;
cout<<"1.finger millet"<<endl;
cout<<"2.Proso millet"<<endl;
cout<<"3.Foxtail millet"<<endl;
cout<<"4.Echinochloa frumentacea"<<endl;
int z;
							do
{

    cin >> z;
}while (z >3 || z < 1);
							if (z == 1) {cout << "      FINGER MILLET      "<<endl;
							cout<<"Eleusine coracana, or finger millet, is an annual herbaceous plant widely grown as a cereal crop in the arid and semiarid areas in Africaand Asia. It is a tetraploid and self-pollinating species probably evolved from its wild relative Eleusine africana."<<endl;
cout<<"Finger millet is native to the Ethiopian and Ugandan highlands.[3] Interesting crop characteristics of finger millet are the ability to withstand cultivation at altitudes over 2000 m above sea level, its favorable micronutrient contents (high iron and methionine content in particular), its high drought tolerance, and the long storage time of the grains."<<endl;
cout<<"Eleusine coracana, or finger millet, is an annual herbaceous plant widely grown as a cereal crop in the arid and semiarid areas in Africaand Asia. It is a tetraploid and self-pollinating species probably evolved from its wild relative Eleusine africana."<<endl;
cout<<"Finger millet is native to the Ethiopian and Ugandan highlands.[3] Interesting crop characteristics of finger millet are the ability to withstand cultivation at altitudes over 2000 m above sea level, its favorable micronutrient contents (high iron and methionine content in particular), its high drought tolerance, and the long storage time of the grains."<<endl;

}
if (z == 2) {cout << "             PROS MILLET         "<<endl;
cout<<"Panicum miliaceum, with many common names including proso millet,[2] broomcorn millet,[2] common millet,[2] broomtail millet,[3] hog millet,[2] Kashfi millet [2] red millet,[2] and white millet,[2] is a grass species used as a crop. Both the wild ancestor and location of the original domestication of proso millet are unknown, but it first appears as a crop in both Transcaucasia and China about 7,000 years ago, suggesting it may have been domesticated independently in each area. It is still extensively cultivated in India, Nepal, Russia, Ukraine, Belarus, the Middle East, Turkey and Romania. In the United States, proso is mainly grown for birdseed. It is sold as health food, and due to its lack of gluten, it can be included in the diets of people who cannot tolerate wheat. The name comes from the pan-Slavic general and generic name for millet (Russian, Ukrainian, Belarusian, Serbian, Macedonian, Bulgarian: просо (identical to proso, but Cyrillic) and Polish, Bosnian, Czech, Slovak, Slovenian, Croatian: proso). Proso is well adapted to many soil and climatic conditions; it has a short growing season, and needs little water. The water requirement of proso is probably the lowest of any major cereal. It is an excellent crop for dryland and no-till farming. Proso millet is an annual grass whose plants reach an average height of 100 cm (4 feet.). Like corn, it has a C4 photosynthesis. The seedheads grow in bunches. The seeds are small (2–3 mm or 0.1 inch) and can be cream, yellow, orange-red, or brown in colour. Proso is an annual grass like all other millets, but it is not closely related to pearl millet, foxtail millet, finger millet, or the barnyard millets."<<endl;}
if (z == 3) {cout << "        FOXTAIL MILLET        "<<endl;
cout<<"It has s an annual grass grown for human food. It is the second-most widely planted species of millet, and the most important in East Asia. It has the longest history of cultivation among the millets, having been grown in India since antiquity. "<<endl;
cout<<"Description: Foxtail millet is an annual grass with slim, vertical, leafy stems which can reach a height of 120–200 cm (3.9–6.6 ft). The seedhead is a dense, hairy panicle 5–30 cm (2.0–11.8 in) long. The small seeds, around 2 mm (less than 1/8 in.) in diameter, are encased in a thin, papery hull which is easily removed in threshing. Seed color varies greatly between varieties."<<endl;
cout<<"Cultivation:In India, foxtail millet is still an important crop in its arid and semi-arid regions.[6] In South India, it has been a staple diet among people for a long time from the sangam period. It is popularly quoted in the old Tamil texts and is commonly associated with Lord Muruga and his consort Valli."<<endl;}
}

}

			break;

			case 2:
				{//code for option 2
				 cout<<"CROPPING PATTERN:"<<endl;
				 cout << "Choose one more number for selecting following patterns of cropping"<< endl;
				 cout<<"1. Sequential Cropping:"<<endl;
				 cout<<"2.Intercropping:"<<endl;
				 cout<<"3.mixed cropping"<<endl;
				 cout<<"4.crop rotation"<<endl;
				 cout<<endl;
				 int d;
				 do
{

    cin >> d;
}while (d >4 || d < 1);
				 if (d == 1) {cout <<"               SEQUENTIAL CROPPING             "<<endl;
                    cout<<"Growing of two or more crops in sequence on the same piece of land in the same year. The succeeding crop is planted or sown only after harvest of the preceding crop. The crop intensification is only in terms of time dimension."<<endl;
                    cout<<"Farmers will manage only one crop at a time."<<endl;
cout<<"Types of Sequential Cropping"<<endl;
cout<<"1. Double Cropping: Cultivation of two crops in succession on a piece of land in a year."<<endl;
cout<<"2. Triple Cropping: Cultivation of three crops in succession on a piece of land in a year."<<endl;
cout<<"3. Quadruple Cropping: Cultivation of four crops in succession on a piece of land in a year."<<endl;
cout<<"4. Ratoon Cropping/Ratooning: Cultivation of crop re-growth after its harvest is rationing. It is also a type of sequential cropping. In this, more than one harvest is done from one sowing/planting. Thus, ratooning consists of allowing stubbles of the original crop after harvesting and to raise another crop." << endl;}
						else if (d == 2) {cout <<"           INTERCROPPING            "<<endl;
						cout<<" Growing two or more crops simultaneously on the same piece of land."<<endl;
cout<<"Crop intensification is in terms of both time and space dimensions."<<endl;
cout<<"Main Crop/Base Crop: It is one which is planted at its optimum population in an intercrop situation and the second crop is planted in between the rows of main or base crop, with a view to obtain some extra inter crop yield without sacrificing the main or base crop yield."<<endl;
cout<<"Intercrop: The short duration crop is raised in widely spaced crop for getting an additional income from the same piece of land."<<endl;}
                     else if (d == 3) {cout <<"MIXED CROPPING"<<endl;
cout<<"Growing of two or more crops together on the same piece of land is called as mixed cropping. In this, the seeds of different crops are mixed together and then sown either in lines or they are board casted. This system is not scientific and it causes problem in performing all agricultural operations and harvesting of crops. This system of cropping is generally practiced in areas where climatic hazards such as flood, drought, frost etc. are frequent and common. The farmers always fear that their crops will fail. The time of sowing of all the crops is same; however they may mature either together or at different times."<<endl;
				}
                       else if (d == 4) {cout <<"             CROP ROTATION            "<<endl;
			cout<<"Growing of different crops alternatively on the same piece of land in a definite sequence or process of growing different crops in succession on a piece of land in a specific period of time with an objective to get maximum profit from least investment without impairing the soil fertility"<<endl;
			}
			 break;

			default:
			cout<<"invalid input ! pleae try again"<<endl;
			break;

		}
			cout<<"Wanna go to the previos menu? (press (y for yes ,n for no))"<<endl;
			cin>>again;

	}
	}
	}while(again=='y'||again=='Y');

	cout << "Do you want to know about another thing? yes or no\t";
	string answer;
	cin >> answer;
	if (answer[0] == 'n' || answer[0] == 'N' || answer[0]== 0)
        show = false;
    else if (answer[0] == 'y' || answer[0] == 'Y' || answer[0]== 1)
        show = true;
}
return 0;
}
