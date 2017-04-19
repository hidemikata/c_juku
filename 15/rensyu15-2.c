/*
*機種のenumとトレイのenumが定義されている。
*kisyu_traysでトレイと機種のマッチングが定義されている。
*kisyu_traysからトレイ３が割り当てられている機種はどの機種か
*機種のenum値をすべて表示させろ。
*/


#include<stdio.h>
enum {
	Sirius	,
	Canopus	,
	Arcturus,
	Vega	,
	Capella	,
	Rigel	,
	Procyon	,
	Betelgeuse,
	Achernar,
	Hadar	,
	Altair	,
	Aldebaran,
	Spica	,
	Antares	,
	Pollux	,
	Fomalhaut,
	Becrux	,
	Deneb	,
	Regulus	,
	Adhara	,
	Castor	,
	Shaula	,
	Elnath	,
	Miaplacidus,
	Alnilam	,
	Alnair	,
	Alnitak	,
	Alioth	,
	Dubhe	,
	Wezen	,
	Benetnasch,
	Sargas	,
	Avior	,
	Menkalinan,
	Atria	,
	Alhena	,
	peacock	,
	Murzim	,
	Alphard	,
	Mira	,
	Hamal	,
	Kaitos	,
	Nunki	,
	Algol	,
	almach	,
	Denebola,
	Aspidiske,
	Naos	,
	Gemma	,
	Schedar	,
	Caph	,
	Merak	,
	Izar	,
	Enif	,
	Ankaa	,
};

enum {
	Tray1,
	Tray2,
	Tray3,
	Tray4,
	Tray5,
	Tray6,
	Tray7,
	Tray8,
	Tray9,
	Tray10,
	Tray11,
	Tray12,
	Tray13,
	Tray14,
	Tray15,
	Tray16,
	Tray17,
	Tray18,
};

typedef struct {
	int kisyu;
	int trays;
}KISYU_TRAYS_T;
KISYU_TRAYS_T kisyu_trays[] = {
{	Sirius	,		Tray1	},
{	Canopus	,		Tray2	},
{	Arcturus,		Tray3	},
{	Vega	,		Tray4	},
{	Capella	,		Tray5	},
{	Rigel	,		Tray6	},
{	Procyon	,		Tray7	},
{	Betelgeuse,		Tray8	},
{	Achernar,		Tray9	},
{	Hadar	,		Tray10	},
{	Altair	,		Tray11	},
{	Aldebaran,		Tray12	},
{	Spica	,		Tray13	},
{	Antares	,		Tray14	},
{	Pollux	,		Tray15	},
{	Fomalhaut,		Tray16	},
{	Becrux	,		Tray17	},
{	Deneb	,		Tray18	},
{	Regulus	,		Tray1	},
{	Adhara	,		Tray2	},
{	Castor	,		Tray3	},
{	Shaula	,		Tray4	},
{	Elnath	,		Tray5	},
{	Miaplacidus,		Tray6	},
{	Alnilam	,		Tray7	},
{	Alnair	,		Tray8	},
{	Alnitak	,		Tray9	},
{	Alioth	,		Tray10	},
{	Dubhe	,		Tray11	},
{	Wezen	,		Tray12	},
{	Benetnasch,		Tray13	},
{	Sargas	,		Tray14	},
{	Avior	,		Tray15	},
{	Menkalinan,		Tray16	},
{	Atria	,		Tray17	},
{	Alhena	,		Tray18	},
{	peacock	,		Tray1	},
{	Murzim	,		Tray2	},
{	Alphard	,		Tray3	},
{	Mira	,		Tray4	},
{	Hamal	,		Tray5	},
{	Deneb	,		Tray6	},
{	Kaitos	,		Tray6	},
{	Nunki	,		Tray7	},
{	Algol	,		Tray8	},
{	almach	,		Tray9	},
{	Denebola,		Tray10	},
{	Aspidiske,		Tray11	},
{	Naos	,		Tray12	},
{	Gemma	,		Tray13	},
{	Schedar	,		Tray14	},
{	Caph	,		Tray15	},
{	Merak	,		Tray16	},
{	Izar	,		Tray17	},
{	Enif	,		Tray18	},
{	Ankaa	,		Tray1	},
};

int main() {










}
