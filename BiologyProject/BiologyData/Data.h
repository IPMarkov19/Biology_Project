#pragma once
#include <string>

using namespace std;

// Themes for studying
string bioThemes[4]{"Genetics","Cell structure","Biosphere","Homeostasis"};

// Questions for practise after the themes (optional)
string bioQuestions[4][7]
{
	{
		"What name is given to the range of differences in the inherited characteristics found within a population?",
		"What term is used to describe the physical appearance that results from an inherited characteristic, eg a persons eye colour?",
		"How do organisms obtain their genetic information?",
		"Which of the following statements describes correctly the influence of sexual reproduction on variation?",
		"How many versions of a gene does an individual usually inherit from their parents?",
		"Which of the following is not part of the DNA strand?",
		"What is the genotype of the parents if 50% of the offspring have an O blood type and the other 50% have an A blood type?"
	},

	{
		"Which structures are found in all types of living cells?",
		"Which organelles are only found in plant cells?",
		"Which of the following is a function of the cell membrane?",
		"What is produced by ribosomes?",
		"What are plasmids made of?",
		"What surrounds and supports bacterial cells?",
		"Which of the following structures can be part of bacterial, fungal and plant cells, but is not present in animal cells?"
	},

	{
		"Biosphere is defined as?",
		"Biosphere consists of?",
		"Component of biosphere related with soil is?",
		"Phenomenon of rain, dew, snow i.e., different forms of water coming to earth under force of gravity is called?",
		"Process of evapo-transpiration and precipitation is called?",
		"Agents which make free atmospheric nitrogen available to plants are?",
		"Maintenance of soil fertility without addition of nutrition is due to"
	},

	{
		"How does the body remove excess carbon dioxide from the body?",
		"What is the approximate normal core temperature for the body?",
		"Where is the body's thermoregulatory centre?",
		"How does sweat keep us cool?",
		"What is vasodilation?",
		"What type of feedback is involved in thermoregulation?",
		"Which statement about diabetes is correct?"
	}
};

string bioAnswers[4][7][3]
{
	{
		{"Biodiversity","Characteristics","Variation"},
		{"Phenotype","Genotype","Variation"},
		{"As a result of environmental changes","They inherit it from their offspring","They inherit it from their parents"},
		{"It decreases the variation in a population","It has no effect on the variation in a population","It increases the variation in a population"},
		{"One from each parent","One from their father or one from their mother","Two from each parent"},
		{"Uracil","Phosphate","Thymine"},
		{"AA and 00","A0 and A0","A0 and 00"}
	},

	{
		{"Cell membranes and cell walls","Cell walls and ribosomes","Ribosomes and cell membranes"},
		{"Chloroplasts","Mitochondria","Nuclei"},
		{"Supporting the cell","Controlling the entry and exit of materials","Storing water"},
		{"Carbon dioxide","Protein","Sugar"},
		{"Proteins","Lipids","DNA"},
		{"Cell membrane","Cell membrane and cell wall","Cell wall"},
		{"Cell membrane","Cell wall","DNA"}
	},

	{
		{"Part of the earth water and atmosphere which inhabits living organism","Part of the soil where animals and plants are found","Atmosphere in which life exists"},
		{"Lithosphere","Atmosphere","All the above"},
		{"Lithosphere","Hydrosphere","Atmosphere"},
		{"Geotropism","Climatic factors","Precipitation"},
		{"Carbon cycle","Nitrogen cycle","Hydrological cycle"},
		{"Lightening","Free living nitrogen fixing bacteria","All the above"},
		{"Floods","Crop residue","Microbial activity"}
	},

	{
		{"By gas exchange in the lungs","By gas exchange in the kidneys","By gas exchange in the liver"},
		{"35 Celsius","37 Celsius","39 Celsius"},
		{"In the brain","In the skin","In the liver"},
		{"Sweat is cool so it cools us down","As sweat evaporates it removes heat from the skin","It carries heat from one part of the body to another"},
		{"Arterioles become wider, increasing the flow of blood in the skin capillaries","Arterioles become narrower, decreasing the flow of blood in the skin capillaries","Arterioles become narrower, increasing the flow of blood in the skin capillaries"},
		{"Negative","Positive","Neutral"},
		{"Type 1 is caused by the failure to produce insulin","Type 1 is caused by the failure to produce glucose","Type 2 is caused by the failure to produce insulin"}
	}
};
