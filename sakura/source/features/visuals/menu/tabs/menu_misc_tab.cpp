#include "../../../../client.h"

char newconfig[256];
int playerSelected;

void Sakura::Menu::Tabs::Misc::Kreedz()
{
	ImGui::BeginChild(/*##kz1*/XorStr<0x40, 6, 0xFB670BEE>("\x63\x62\x29\x39\x75" + 0xFB670BEE).s, ImVec2(250, -1));
	{
		Sakura::Menu::Widgets::Checkbox(/*Bhop*/XorStr<0x14, 5, 0x9D027C79>("\x56\x7D\x79\x67" + 0x9D027C79).s, &cvar.kz_bhop);
		Sakura::Menu::Widgets::Checkbox(/*Bhop Double*/XorStr<0xAB, 12, 0x08D20BAE>("\xE9\xC4\xC2\xDE\x8F\xF4\xDE\xC7\xD1\xD8\xD0" + 0x08D20BAE).s, &cvar.kz_bhop_double);
		Sakura::Menu::Widgets::Checkbox(/*Bhop Triple*/XorStr<0xBF, 12, 0xB63E3022>("\xFD\xA8\xAE\xB2\xE3\x90\xB7\xAF\xB7\xA4\xAC" + 0xB63E3022).s, &cvar.kz_bhop_triple);
		Sakura::Menu::Widgets::Checkbox(/*Fast Run*/XorStr<0x77, 9, 0xB0DCDD26>("\x31\x19\x0A\x0E\x5B\x2E\x08\x10" + 0xB0DCDD26).s, &cvar.kz_fast_run);
		Sakura::Menu::Widgets::Checkbox(/*Ground Strafe*/XorStr<0xCC, 14, 0x4F9DD0B7>("\x8B\xBF\xA1\xBA\xBE\xB5\xF2\x80\xA0\xA7\xB7\xB1\xBD" + 0x4F9DD0B7).s, &cvar.kz_ground_strafe);
		Sakura::Menu::Widgets::Checkbox(/*StandUp Ground Strafe*/XorStr<0x85, 22, 0xF68F9FAC>("\xD6\xF2\xE6\xE6\xED\xDF\xFB\xAC\xCA\xFC\xE0\xE5\xFF\xF6\xB3\xC7\xE1\xE4\xF6\xFE\xFC" + 0xF68F9FAC).s, &cvar.kz_sgs);
		Sakura::Menu::Widgets::Checkbox(/*Bhop Ground Strafe*/XorStr<0xC8, 19, 0xC9BCB091>("\x8A\xA1\xA5\xBB\xEC\x8A\xBC\xA0\xA5\xBF\xB6\xF3\x87\xA1\xA4\xB6\xBE\xBC" + 0xC9BCB091).s, &cvar.kz_bgs);
		Sakura::Menu::Widgets::Checkbox(/*Jump Bug*/XorStr<0xC5, 9, 0xC4CBDBAD>("\x8F\xB3\xAA\xB8\xE9\x88\xBE\xAB" + 0xC4CBDBAD).s, &cvar.kz_jump_bug);
		Sakura::Menu::Widgets::Checkbox(/*Jump Bug Auto*/XorStr<0xE4, 14, 0x58186214>("\xAE\x90\x8B\x97\xC8\xAB\x9F\x8C\xCC\xAC\x9B\x9B\x9F" + 0x58186214).s, &cvar.kz_jump_bug_auto);
		Sakura::Menu::Widgets::Checkbox(/*Strafe*/XorStr<0x7D, 7, 0x5900B760>("\x2E\x0A\x0D\xE1\xE7\xE7" + 0x5900B760).s, &cvar.kz_strafe);
		Sakura::Menu::Widgets::Checkbox(/*Strafe Perfect Silent*/XorStr<0x42, 22, 0xA6CF9E9F>("\x11\x37\x36\x24\x20\x22\x68\x19\x2F\x39\x2A\x28\x2D\x3B\x70\x02\x3B\x3F\x31\x3B\x22" + 0xA6CF9E9F).s, &cvar.kz_strafe_psilent);
		Sakura::Menu::Widgets::Checkbox(/*Hns Info Window*/XorStr<0x8C, 16, 0xACB2F8A6>("\xC4\xE3\xFD\xAF\xD9\xFF\xF4\xFC\xB4\xC2\xFF\xF9\xFC\xF6\xED" + 0xACB2F8A6).s, &cvar.kz_show_kz);
		Sakura::Menu::Widgets::Checkbox(/*FPS Boost*/XorStr<0x9D, 10, 0x7CFE82B3>("\xDB\xCE\xCC\x80\xE3\xCD\xCC\xD7\xD1" + 0x7CFE82B3).s, &cvar.misc_skipframes);
	}
	ImGui::EndChild();
	ImGui::SameLine();
	ImGui::BeginChild(/*##kz2*/XorStr<0xBC, 6, 0x65AE8FE9>("\x9F\x9E\xD5\xC5\xF2" + 0x65AE8FE9).s, ImVec2(250, -1));
	{
		ImGui::PushItemWidth(itemWidth);
		Sakura::Menu::Widgets::SliderFloat(/*Display Info Time*/XorStr<0x8C, 18, 0x8A6C3E16>("\xC8\xE4\xFD\xFF\xFC\xF0\xEB\xB3\xDD\xFB\xF0\xF8\xB8\xCD\xF3\xF6\xF9" + 0x8A6C3E16).s, &cvar.kz_display_time, 1, 20, "%.0f");
		Sakura::Menu::Widgets::SliderFloat(/*SGS Ground origin*/XorStr<0x0B, 18, 0xE2BFA2E0>("\x58\x4B\x5E\x2E\x48\x62\x7E\x67\x7D\x70\x35\x79\x65\x71\x7E\x73\x75" + 0xE2BFA2E0).s, &cvar.kz_sgs_ground_origin, 2, 30, "%.0f");
		ImGui::PopItemWidth();
	}
	ImGui::EndChild();
}

void Sakura::Menu::Tabs::Misc::Keybindings()
{
	ImGui::BeginChild(/*##keys1*/XorStr<0x38, 8, 0x86A00DD7>("\x1B\x1A\x51\x5E\x45\x4E\x0F" + 0x86A00DD7).s, ImVec2(250, -1));
	{
		HudMenuBind(cvar.gui_key);
		HudKeyBind(cvar.kz_bhop_key, /*Bhop Key*/XorStr<0x19, 9, 0xB172A456>("\x5B\x72\x74\x6C\x3D\x55\x7A\x59" + 0xB172A456).s, { ImGui::GetWindowSize().x - 6, 0 });
		HudKeyBind(cvar.kz_fastrun_key, /*Fastrun Key*/XorStr<0x8A, 12, 0xA5F66481>("\xCC\xEA\xFF\xF9\xFC\xFA\xFE\xB1\xD9\xF6\xED" + 0xA5F66481).s, { ImGui::GetWindowSize().x - 6, 0 });
		HudKeyBind(cvar.kz_ground_strafe_key, /*Gstrafe Key*/XorStr<0x0C, 12, 0xAF544FDD>("\x4B\x7E\x7A\x7D\x71\x77\x77\x33\x5F\x70\x6F" + 0xAF544FDD).s, { ImGui::GetWindowSize().x - 6, 0 });
		HudKeyBind(cvar.kz_jumpbug_key, /*Jumpbug Key*/XorStr<0xB7, 12, 0x58E2FDD1>("\xFD\xCD\xD4\xCA\xD9\xC9\xDA\x9E\xF4\xA5\xB8" + 0x58E2FDD1).s, { ImGui::GetWindowSize().x - 6, 0 });
		HudKeyBind(cvar.kz_strafe_key, /*Strafe Key*/XorStr<0x1D, 11, 0xABBC9BB7>("\x4E\x6A\x6D\x41\x47\x47\x03\x6F\x40\x5F" + 0xABBC9BB7).s, { ImGui::GetWindowSize().x - 6, 0 });
		HudKeyBind(cvar.kz_strafe_toggle_key, /*Strafe Toggle Key*/XorStr<0x53, 18, 0xB4B15F40>("\x00\x20\x27\x37\x31\x3D\x79\x0E\x34\x3B\x3A\x32\x3A\x40\x2A\x07\x1A" + 0xB4B15F40).s, { ImGui::GetWindowSize().x - 6, 0 });
		HudKeyBind(cvar.route_rush_key, /*Speedhack Key*/XorStr<0x61, 14, 0x05B04C95>("\x32\x12\x06\x01\x01\x0E\x06\x0B\x02\x4A\x20\x09\x14" + 0x05B04C95).s, { ImGui::GetWindowSize().x - 6, 0 });
	}
	ImGui::EndChild();
	ImGui::SameLine();
	ImGui::BeginChild(/*##keys2*/XorStr<0x50, 8, 0xF0A71932>("\x73\x72\x39\x36\x2D\x26\x64" + 0xF0A71932).s, ImVec2(250, -1));
	{
		HudKeyBind(cvar.misc_thirdperson_key, /*Thirdperson Key*/XorStr<0xA5, 16, 0xA4A06107>("\xF1\xCE\xCE\xDA\xCD\xDA\xCE\xDE\xDE\xC1\xC1\x90\xFA\xD7\xCA" + 0xA4A06107).s, { ImGui::GetWindowSize().x - 6, 0 });
		HudKeyBind(cvar.legit_key, /*Legit Fire Key*/XorStr<0xE6, 15, 0xBD74EBCF>("\xAA\x82\x8F\x80\x9E\xCB\xAA\x84\x9C\x8A\xD0\xBA\x97\x8A" + 0xBD74EBCF).s, { ImGui::GetWindowSize().x - 6, 0 });
		HudKeyBind(cvar.legit_trigger_key, /*Triggerbot Key*/XorStr<0x06, 15, 0xD8A750A4>("\x52\x75\x61\x6E\x6D\x6E\x7E\x6F\x61\x7B\x30\x5A\x77\x6A" + 0xD8A750A4).s, { ImGui::GetWindowSize().x - 6, 0 });
		HudKeyBind(cvar.rage_auto_fire_key, /*Rage Auto Fire Key*/XorStr<0xE2, 19, 0x4452C61C>("\xB0\x82\x83\x80\xC6\xA6\x9D\x9D\x85\xCB\xAA\x84\x9C\x8A\xD0\xBA\x97\x8A" + 0x4452C61C).s, { ImGui::GetWindowSize().x - 6, 0 });
		HudKeyBind(cvar.aa_yaw_sideway_key, /*AA Sideway Key*/XorStr<0xDE, 15, 0x9C71292C>("\x9F\x9E\xC0\xB2\x8B\x87\x81\x92\x87\x9E\xC8\xA2\x8F\x92" + 0x9C71292C).s, { ImGui::GetWindowSize().x - 6, 0 });
	}
	ImGui::EndChild();
}

void Sakura::Menu::Tabs::Misc::Backtrack()
{
	ImGui::BeginChild(/*##mbt1*/XorStr<0x2F, 7, 0xC6453850>("\x0C\x13\x5C\x50\x47\x05" + 0xC6453850).s, ImVec2(250, -1));
	{
		Sakura::Menu::Widgets::Checkbox(/*Enable*/XorStr<0x14, 7, 0x9D2621C8>("\x51\x7B\x77\x75\x74\x7C" + 0x9D2621C8).s, &cvar.misc_fakelatency);
		Sakura::Menu::Widgets::Checkbox(/*Light*/XorStr<0xED, 6, 0x83A61004>("\xA1\x87\x88\x98\x85" + 0x83A61004).s, &cvar.misc_backtrack_light);
		Sakura::Menu::Widgets::Checkbox(/*Chams Wireframe*/XorStr<0xDD, 16, 0x3A89888F>("\x9E\xB6\xBE\x8D\x92\xC2\xB4\x8D\x97\x83\x81\x9A\x88\x87\x8E" + 0x3A89888F).s, &cvar.misc_backtrack_wireframe);
	}
	ImGui::EndChild();
	ImGui::SameLine();
	ImGui::BeginChild(/*##mbt2*/XorStr<0x7C, 7, 0xD1DC7E5A>("\x5F\x5E\x13\x1D\xF4\xB3" + 0xD1DC7E5A).s, ImVec2(250, -1));
	{
		ImGui::PushItemWidth(itemWidth);
		Sakura::Menu::Widgets::SliderFloat(/*Latency*/XorStr<0xF3, 8, 0xF7594FCB>("\xBF\x95\x81\x93\x99\x9B\x80" + 0xF7594FCB).s, &cvar.misc_fakelatency_amount, 0, 500, "+%.0fms");
		
		Sakura::Menu::Widgets::Combo(
			/*Chams*/XorStr<0x31, 6, 0xB8BE549B>("\x72\x5A\x52\x59\x46" + 0xB8BE549B).s,
			&cvar.misc_backtrack_chams,
			/*Off\0Material\0Texture\0Flat\0*/XorStr<0x89, 27, 0x62B4F577>("\xC6\xEC\xED\x8C\xC0\xEF\xFB\xF5\xE3\xFB\xF2\xF8\x95\xC2\xF2\xE0\xED\xEF\xE9\xF9\x9D\xD8\xF3\xC1\xD5\xA2" + 0x62B4F577).s);
		
		Sakura::Menu::Widgets::Combo(
			/*Chams Wireframe Type*/XorStr<0x81, 21, 0xBCB1BE42>("\xC2\xEA\xE2\xE9\xF6\xA6\xD0\xE1\xFB\xEF\xED\xFE\xEC\xE3\xEA\xB0\xC5\xEB\xE3\xF1" + 0xBCB1BE42).s,
			&cvar.misc_backtrack_wireframe_mode,
			/*Lines\0Points\0*/XorStr<0x2E, 14, 0x231B4418>("\x62\x46\x5E\x54\x41\x33\x64\x5A\x5F\x59\x4C\x4A\x3A" + 0x231B4418).s);
		
		ImGui::PopItemWidth();
	}
	ImGui::EndChild();
}

void Sakura::Menu::Tabs::Misc::Route()
{
	ImGui::BeginChild(/*##route1*/XorStr<0xCD, 9, 0xC7B5803F>("\xEE\xED\xBD\xBF\xA4\xA6\xB6\xE5" + 0xC7B5803F).s, ImVec2(250, -1));
	{
		Sakura::Menu::Widgets::Checkbox(/*Enable*/XorStr<0x58, 7, 0x68381F8B>("\x1D\x37\x3B\x39\x30\x38" + 0x68381F8B).s, &cvar.route_activate);
		Sakura::Menu::Widgets::Checkbox(/*Draw Route*/XorStr<0x98, 11, 0x017EBBBC>("\xDC\xEB\xFB\xEC\xBC\xCF\xF1\xEA\xD4\xC4" + 0x017EBBBC).s, &cvar.route_draw);
		Sakura::Menu::Widgets::Checkbox(/*Visual While Rushing*/XorStr<0x6F, 21, 0x199D6821>("\x39\x19\x02\x07\x12\x18\x55\x21\x1F\x11\x15\x1F\x5B\x2E\x08\x0D\x17\xE9\xEF\xE5" + 0x199D6821).s, &cvar.route_draw_visual);
	}
	ImGui::EndChild();
	ImGui::SameLine();
	ImGui::BeginChild(/*##route2*/XorStr<0x06, 9, 0xB83230C0>("\x25\x24\x7A\x66\x7F\x7F\x69\x3F" + 0xB83230C0).s, ImVec2(250, -1));
	{
		ImGui::PushItemWidth(itemWidth);
		Sakura::Menu::Widgets::SliderFloat(/*Direction Steps*/XorStr<0x26, 16, 0x87C477C7>("\x62\x4E\x5A\x4C\x49\x5F\x45\x42\x40\x0F\x63\x45\x57\x43\x47" + 0x87C477C7).s, &cvar.route_direction_step, 1.f, 10.f, "%.0f");
		Sakura::Menu::Widgets::SliderFloat(/*Jump Steps*/XorStr<0x8D, 11, 0x4101FDB6>("\xC7\xFB\xE2\xE0\xB1\xC1\xE7\xF1\xE5\xE5" + 0x4101FDB6).s, &cvar.route_jump_step, 1.f, 10.f, "%.0f");
		
		Sakura::Menu::Widgets::Combo(
			/*Route Mode*/XorStr<0xE2, 11, 0xAB26C36C>("\xB0\x8C\x91\x91\x83\xC7\xA5\x86\x8E\x8E" + 0xAB26C36C).s,
			&cvar.route_mode,
			/*Stay in route\0Go after target\0*/XorStr<0xB2, 31, 0x2518CA81>("\xE1\xC7\xD5\xCC\x96\xDE\xD6\x99\xC8\xD4\xC9\xC9\xDB\xBF\x87\xAE\xE2\xA2\xA2\xB1\xA3\xB5\xE8\xBD\xAB\xB9\xAB\xA8\xBA\xCF" + 0x2518CA81).s);
		
		ImGui::PopItemWidth();

		ImGui::Spacing();
		ImGui::Spacing();
		ImGui::Spacing();
		ImGui::Spacing();
		ImGui::Spacing();
		ImGui::Spacing();

		if (Sakura::Menu::Widgets::Button(/*Start*/XorStr<0x0A, 6, 0x23F9E94C>("\x59\x7F\x6D\x7F\x7A" + 0x23F9E94C).s, { ImGui::GetWindowSize().x - 6, 0 }))
		{
			autoroute.RecordAnyRouteStart();
			Toast::Create({ 6, /*Recording started!*/XorStr<0x14,19,0x98EDD3D3>("\x46\x70\x75\x78\x6A\x7D\x73\x75\x7B\x3D\x6D\x6B\x41\x53\x56\x46\x40\x04" + 0x98EDD3D3).s });
		}

		if (Sakura::Menu::Widgets::Button(/*Stop*/XorStr<0xB7, 5, 0x9D58765C>("\xE4\xCC\xD6\xCA" + 0x9D58765C).s, { ImGui::GetWindowSize().x - 6, 0 }))
		{
			autoroute.RecordRouteStop();
			Toast::Create({ 6, /*Recording stopped!*/XorStr<0x53,19,0xC152F01C>("\x01\x31\x36\x39\x25\x3C\x30\x34\x3C\x7C\x2E\x2A\x30\x10\x11\x07\x07\x45" + 0xC152F01C).s });
		}

		if (Sakura::Menu::Widgets::Button(/*Add Point*/XorStr<0xC6, 10, 0x557F41F9>("\x87\xA3\xAC\xE9\x9A\xA4\xA5\xA3\xBA" + 0x557F41F9).s, { ImGui::GetWindowSize().x - 6, 0 }))
		{
			autoroute.AddPoint();
			Toast::Create({ 3, /*Point added*/XorStr<0x06,12,0xB7D6C6FB>("\x56\x68\x61\x67\x7E\x2B\x6D\x69\x6A\x6A\x74" + 0xB7D6C6FB).s });
		}

		if (Sakura::Menu::Widgets::Button(/*Clear*/XorStr<0x00, 6, 0x9F0AC6F5>("\x43\x6D\x67\x62\x76" + 0x9F0AC6F5).s, { ImGui::GetWindowSize().x - 6, 0 }))
		{
			autoroute.ClearAllRoute();
			Toast::Create({ 3, /*Cleared route*/XorStr<0xA8,14,0xD3EA6D95>("\xEB\xC5\xCF\xCA\xDE\xC8\xCA\x8F\xC2\xDE\xC7\xC7\xD1" + 0xD3EA6D95).s });
		}

		if (Sakura::Menu::Widgets::Button(/*Save*/XorStr<0x85, 5, 0x38101CED>("\xD6\xE7\xF1\xED" + 0x38101CED).s, { ImGui::GetWindowSize().x - 6, 0 }))
		{
			autoroute.SaveRoute();
			Toast::Create({ 3, /*Saved*/XorStr<0x66,6,0x82667591>("\x35\x06\x1E\x0C\x0E" + 0x82667591).s });
		}

		if (Sakura::Menu::Widgets::Button(/*Load*/XorStr<0x17, 5, 0xF8C50F5B>("\x5B\x77\x78\x7E" + 0xF8C50F5B).s, { ImGui::GetWindowSize().x - 6, 0 }))
		{
			autoroute.LoadRoute("");
			Toast::Create({ 3, /*Loaded*/XorStr<0xA2,7,0x67F28644>("\xEE\xCC\xC5\xC1\xC3\xC3" + 0x67F28644).s });
		}
	}
	ImGui::EndChild();
}

void Sakura::Menu::Tabs::Misc::SidChanger()
{
	if (c_Offset.HLType != RENDERTYPE_UNDEFINED)
	{
		int steamid[7] = { int(cvar.id1), int(cvar.id2), int(cvar.id3), int(cvar.id4), int(cvar.id5), int(cvar.id6), int(cvar.id7) };

		ImGui::PushItemWidth(itemWidth * 2);
		
		Sakura::Menu::Widgets::Combo(
			/*Steam ID Method*/XorStr<0xB4, 16, 0x2735908D>("\xE7\xC1\xD3\xD6\xD5\x99\xF3\xFF\x9C\xF0\xDB\xCB\xA8\xAE\xA6" + 0x2735908D).s,
			&cvar.steamid,
			/*Off\0Auto\0Manual\0Custom\0*/XorStr<0xB2, 24, 0x8B5C980B>("\xFD\xD5\xD2\xB5\xF7\xC2\xCC\xD6\xBA\xF6\xDD\xD3\xCB\xDE\xAC\xC1\x81\xB6\xB7\xB1\xA9\xAA\xC8" + 0x8B5C980B).s);
		
		ImGui::PopItemWidth();

		switch (static_cast<int>(cvar.steamid))
		{
		case 1:
			ImGui::Text(/*Your SID will change automatically*/XorStr<0x60, 35, 0x2CA2AAE5>("\x39\x0E\x17\x11\x44\x36\x2F\x23\x48\x1E\x03\x07\x00\x4D\x0D\x07\x11\x1F\x15\x16\x54\x14\x03\x03\x17\x14\x1B\x0F\x15\x1E\x1F\x13\xEC\xF8" + 0x2CA2AAE5).s);
			break;
		case 2:
			ImGui::PushItemWidth(itemWidth * 2);
			//Sakura::Menu::Widgets::SliderFloat("SID", steamid, 0, 35, "%.0f", 1.f);
			ImGui::Text(/*Hold and drag*/XorStr<0xBE, 14, 0x297B4B45>("\xF6\xD0\xAC\xA5\xE2\xA2\xAA\xA1\xE6\xA3\xBA\xA8\xAD" + 0x297B4B45).s);
			ImGui::DragInt4("##1", steamid, 1, 0, 35);
			//ImGui::DragInt7("##1", steamid, 1, 0, 35);
			ImGui::PopItemWidth();

			cvar.id1 = steamid[0];
			cvar.id2 = steamid[1];
			cvar.id3 = steamid[2];
			cvar.id4 = steamid[3];
			cvar.id5 = steamid[4];
			cvar.id6 = steamid[5];
			cvar.id7 = steamid[6];
			if (cvar.id1 > 35 || cvar.id1 < 0)cvar.id1 = 1;
			if (cvar.id2 > 35 || cvar.id2 < 0)cvar.id2 = 2;
			if (cvar.id3 > 35 || cvar.id3 < 0)cvar.id3 = 3;
			if (cvar.id4 > 35 || cvar.id4 < 0)cvar.id4 = 4;
			if (cvar.id5 > 35 || cvar.id5 < 0)cvar.id5 = 5;
			if (cvar.id6 > 35 || cvar.id6 < 0)cvar.id6 = 6;
			if (cvar.id7 > 35 || cvar.id7 < 0)cvar.id7 = 7;
			break;
		case 3:
			ImGui::PushItemWidth(itemWidth * 2);
			ImGui::Text(/*SID:*/XorStr<0x31, 5, 0xFBCD8E7B>("\x62\x7B\x77\x0E" + 0xFBCD8E7B).s);
			ImGui::InputText("", customSteamId, 7);
			ImGui::PopItemWidth();
			break;
		}
	}
	else
		ImGui::Text(/*SID Not Available*/XorStr<0x16, 18, 0x479048D4>("\x45\x5E\x5C\x39\x54\x74\x68\x3D\x5F\x69\x41\x48\x4E\x42\x46\x49\x43" + 0x479048D4).s);
}

void Sakura::Menu::Tabs::Misc::AntiAFK()
{
	ImGui::BeginChild(/*##maa1*/XorStr<0x45, 7, 0xEBB25610>("\x66\x65\x2A\x29\x28\x7B" + 0xEBB25610).s, ImVec2(250, -1));
	{
		Sakura::Menu::Widgets::Checkbox(/*Enable anti afk*/XorStr<0xBA, 16, 0xEAB0697C>("\xFF\xD5\xDD\xDF\xD2\xDA\xE0\xA0\xAC\xB7\xAD\xE5\xA7\xA1\xA3" + 0xEAB0697C).s, &cvar.afk_anti);
	}
	ImGui::EndChild();
	ImGui::SameLine();
	ImGui::BeginChild(/*##maa2*/XorStr<0xE7, 7, 0x8C1EA631>("\xC4\xCB\x84\x8B\x8A\xDE" + 0x8C1EA631).s, ImVec2(250, -1));
	{
		ImGui::PushItemWidth(itemWidth);
		Sakura::Menu::Widgets::SliderFloat(/*Time*/XorStr<0x67, 5, 0xFD0EB92C>("\x33\x01\x04\x0F" + 0xFD0EB92C).s, &cvar.afk_time, 3, 90, /*%.0fs*/XorStr<0xAE, 6, 0x0747556F>("\x8B\x81\x80\xD7\xC1" + 0x0747556F).s);
		Sakura::Menu::Widgets::SliderFloat(/*Yaw degree*/XorStr<0xCA, 11, 0xEDA444AF>("\x93\xAA\xBB\xED\xAA\xAA\xB7\xA3\xB7\xB6" + 0xEDA444AF).s, &cvar.afk_yaw, -45, 45, u8"%.0f�");
		ImGui::PopItemWidth();
	}
	ImGui::EndChild();
}

void Sakura::Menu::Tabs::Misc::PlayerList()
{
	ImGui::BeginChild(/*##route1*/XorStr<0xA7, 9, 0x80F14DBD>("\x84\x8B\xDB\xC5\xDE\xD8\xC8\x9F" + 0x80F14DBD).s, ImVec2(250, -1));
	{
		ImGui::PushStyleColor(ImGuiCol_Header, (ImVec4)Sakura::Menu::GetMenuColor(0.39f));
		ImGui::PushStyleColor(ImGuiCol_HeaderHovered, (ImVec4)Sakura::Menu::GetMenuColor(0.80f));
		ImGui::PushStyleColor(ImGuiCol_HeaderActive, (ImVec4)Sakura::Menu::GetMenuColor(1.00f));
		ImGui::PushStyleColor(ImGuiCol_FrameBg, (ImVec4)ImColor(0, 0, 0, 50));
		ImGui::ListBoxHeader(/*playerlist*/XorStr<0xC8, 11, 0xDD30E08A>("\xB8\xA5\xAB\xB2\xA9\xBF\xA2\xA6\xA3\xA5" + 0xDD30E08A).s, ImVec2(250, -1));
		{
			// first we are adding tt players
			for (unsigned int id = 0; id <= g_Engine.GetMaxClients(); id++)
			{
				if (id == pmove->player_index + 1)
					continue;

				player_info_s* player = g_Studio.PlayerInfo(id - 1);

				if (!player || !(lstrlenA(player->name) > 0))
					continue;

				if (g_Player[id].iTeam != TEAM_TT)
					continue;

				bool is_selected = (playerSelected == id);
				ImGui::PushStyleColor(ImGuiCol_Text, g_Player[id].bAliveInScoreTab ? ImVec4(1.f, 0.5f, 0.5f, 1.f) : ImVec4(1.f, 0.15f, 0.15f, 0.5f));
				if (ImGui::Selectable(player->name, &is_selected))
				{
					playerSelected = -1;
					IdHook::AddPlayer(id);
				}
				ImGui::PopStyleColor();

				switch (IdHook::FirstKillPlayer[id])
				{
				case IDHOOK_PLAYER_NONE:

					break;
				case IDHOOK_PLAYER_ON:
					ImGui::SameLine();
					ImGui::PushStyleColor(ImGuiCol_Text, ImVec4(0.5f, 1.f, 0.5f, 1.f));
					ImGui::Text(/*[ON]*/XorStr<0xAA, 5, 0x2DE0A2A8>("\xF1\xE4\xE2\xF0" + 0x2DE0A2A8).s);
					ImGui::PopStyleColor();
					break;
				case IDHOOK_PLAYER_OFF:
					ImGui::SameLine();
					ImGui::PushStyleColor(ImGuiCol_Text, ImVec4(1.f, 0.f, 0.f, 1.f));
					ImGui::Text(/*[OFF]*/XorStr<0x3D, 6, 0xEBD3A96B>("\x66\x71\x79\x06\x1C" + 0xEBD3A96B).s);
					ImGui::PopStyleColor();
					break;
				}

				if (g_Player[id].bVip)
				{
					ImGui::SameLine();
					ImGui::PushFont(Sakura::Menu::Fonts::icons);
					ImGui::PushStyleColor(ImGuiCol_Text, ImVec4(1.f, 1.f, 0.f, 1.f));
					ImGui::SetCursorPosX(ImGui::GetCursorPosX() - 5);
					ImGui::SetCursorPosY(ImGui::GetCursorPosY() - 5);
					ImGui::Text(/*g*/XorStr<0x64, 2, 0xA25B40C7>("\x03" + 0xA25B40C7).s);
					ImGui::PopStyleColor();
					ImGui::PopFont();
				}
			}

			// now the ct players
			for (unsigned int id = 0; id <= g_Engine.GetMaxClients(); id++)
			{
				if (id == pmove->player_index + 1)
					continue;

				player_info_s* player = g_Studio.PlayerInfo(id - 1);

				if (!player || !(lstrlenA(player->name) > 0))
					continue;

				if (g_Player[id].iTeam != TEAM_CT)
					continue;

				bool is_selected = (playerSelected == id);
				ImGui::PushStyleColor(ImGuiCol_Text, g_Player[id].bAliveInScoreTab ? ImVec4(0.5f, 0.5f, 1.f, 1.f) : ImVec4(0.15f, 0.15f, 1.f, 0.5f));
				if (ImGui::Selectable(player->name, &is_selected))
				{
					playerSelected = -1;
					IdHook::AddPlayer(id);
				}
				ImGui::PopStyleColor();

				switch (IdHook::FirstKillPlayer[id])
				{
				case IDHOOK_PLAYER_NONE:

					break;
				case IDHOOK_PLAYER_ON:
					ImGui::SameLine();
					//ImGui::SetCursorPosX(ImGui::GetCursorPosX() - 5);
					//ImGui::SetCursorPosY(ImGui::GetCursorPosY() - 5);
					ImGui::PushStyleColor(ImGuiCol_Text, ImVec4(0.5f, 1.f, 0.5f, 1.f));
					ImGui::Text(/*[ON]*/XorStr<0xAA, 5, 0x2DE0A2A8>("\xF1\xE4\xE2\xF0" + 0x2DE0A2A8).s);
					ImGui::PopStyleColor();
					break;
				case IDHOOK_PLAYER_OFF:
					ImGui::SameLine();
					//ImGui::SetCursorPosX(ImGui::GetCursorPosX() - 5);
					//ImGui::SetCursorPosY(ImGui::GetCursorPosY() - 5);
					ImGui::PushStyleColor(ImGuiCol_Text, ImVec4(1.f, 0.f, 0.f, 1.f));
					ImGui::Text(/*[OFF]*/XorStr<0x3D, 6, 0xEBD3A96B>("\x66\x71\x79\x06\x1C" + 0xEBD3A96B).s);
					ImGui::PopStyleColor();
					break;
				}

				if (g_Player[id].bVip)
				{
					ImGui::SameLine();
					ImGui::PushFont(Sakura::Menu::Fonts::icons);
					ImGui::PushStyleColor(ImGuiCol_Text, ImVec4(1.f, 1.f, 0.f, 1.f));
					ImGui::SetCursorPosX(ImGui::GetCursorPosX() - 5);
					ImGui::SetCursorPosY(ImGui::GetCursorPosY() - 5);
					ImGui::Text(/*g*/XorStr<0x64, 2, 0xA25B40C7>("\x03" + 0xA25B40C7).s);
					ImGui::PopStyleColor();
					ImGui::PopFont();
				}
			}
		}
		ImGui::ListBoxFooter();
		ImGui::PopStyleColor(4);
	}
	ImGui::EndChild();
	ImGui::SameLine();
	ImGui::BeginChild(/*##route2*/XorStr<0xC3, 9, 0x9BAA3EC2>("\xE0\xE7\xB7\xA9\xB2\xBC\xAC\xF8" + 0x9BAA3EC2).s, ImVec2(250, -1));
	{
		switch (static_cast<int>(cvar.aim_id_mode))
		{
		case IDHOOK_ATTACK_ALL:
			if (Sakura::Menu::Widgets::Button(/*Attack all*/XorStr<0x93, 11, 0xDC913528>("\xD2\xE0\xE1\xF7\xF4\xF3\xB9\xFB\xF7\xF0" + 0xDC913528).s, { ImGui::GetWindowSize().x - 6, 0 }))
				IdHook::First_Kill_Mode();

			break;

		case IDHOOK_ATTACK_ON_DONT_ATTACK_OFF:
			if (Sakura::Menu::Widgets::Button(/*Attack on first - don't attack off*/XorStr<0x51, 35, 0x315932F7>("\x10\x26\x27\x35\x36\x3D\x77\x37\x37\x7A\x3D\x35\x2F\x2D\x2B\x40\x4C\x42\x07\x0B\x0B\x41\x13\x48\x08\x1E\x1F\x0D\x0E\x05\x4F\x1F\x17\x14" + 0x315932F7).s, { ImGui::GetWindowSize().x - 6, 0 }))
				IdHook::First_Kill_Mode();

			break;

		case IDHOOK_ATTACK_ON:
			if (Sakura::Menu::Widgets::Button(/*Attack only on*/XorStr<0x3F, 15, 0xC3E2C53C>("\x7E\x34\x35\x23\x20\x2F\x65\x29\x29\x24\x30\x6A\x24\x22" + 0xC3E2C53C).s, { ImGui::GetWindowSize().x - 6, 0 }))
				IdHook::First_Kill_Mode();

			break;
		}

		if (Sakura::Menu::Widgets::Button(/*Clear players*/XorStr<0xF8, 14, 0x4CBFB9BE>("\xBB\x95\x9F\x9A\x8E\xDD\x8E\x93\x61\x78\x67\x71\x77" + 0x4CBFB9BE).s, { ImGui::GetWindowSize().x - 6, 0 }))
			IdHook::ClearPlayer();

		ImGui::Spacing();
		ImGui::Spacing();

		Sakura::Menu::Widgets::Checkbox(/*Don't draw on OFF*/XorStr<0x82, 18, 0x2047F43E>("\xC6\xEC\xEA\xA2\xF2\xA7\xEC\xFB\xEB\xFC\xAC\xE2\xE0\xAF\xDF\xD7\xD4" + 0x2047F43E).s, &cvar.visual_idhook_only);
	}
	ImGui::EndChild();
}

void Sakura::Menu::Tabs::Misc::Notify()
{
	ImGui::BeginChild(/*##maa1*/XorStr<0xF7, 7, 0x45925D59>("\xD4\xDB\x94\x9B\x9A\xCD" + 0x45925D59).s, ImVec2(250, -1));
	{
		Sakura::Menu::Widgets::Checkbox(/*Enable*/XorStr<0x16, 7, 0x2FA43D44>("\x53\x79\x79\x7B\x76\x7E" + 0x2FA43D44).s, &cvar.notifications_enable);
		Sakura::Menu::Widgets::Checkbox(/*Text only*/XorStr<0xD2, 10, 0x4AB2CE92>("\x86\xB6\xAC\xA1\xF6\xB8\xB6\xB5\xA3" + 0x4AB2CE92).s, &cvar.notifications_text_only);

		ImGui::Spacing();
		ImGui::Spacing();

		Sakura::Menu::Widgets::Checkbox(/*Weapon name on pickup*/XorStr<0x2A, 22, 0x836431C6>("\x7D\x4E\x4D\x5D\x41\x41\x10\x5F\x53\x5E\x51\x15\x59\x59\x18\x49\x53\x58\x57\x48\x4E" + 0x836431C6).s, &cvar.visual_weapon_local);
	}
	ImGui::EndChild();
	ImGui::SameLine();
	ImGui::BeginChild(/*##maa2*/XorStr<0x33, 7, 0xCAF02059>("\x10\x17\x58\x57\x56\x0A" + 0xCAF02059).s, ImVec2(250, -1));
	{
		ImGui::PushItemWidth(itemWidth);
		Sakura::Menu::Widgets::SliderFloat(/*Fade time*/XorStr<0x15, 10, 0xB6BC7FC0>("\x53\x77\x73\x7D\x39\x6E\x72\x71\x78" + 0xB6BC7FC0).s, &cvar.notifications_fade, 50.f, 500.f, "%.0fms");
		ImGui::PopItemWidth();
	}
	ImGui::EndChild();
}

//void Sakura::Menu::Tabs::Misc::ModelHitboxes()
//{
//	static int modelselect = 0;
//
//	ImGui::BeginChild(/*##omh1*/XorStr<0x8F, 7, 0xE3D0899C>("\xAC\xB3\xFE\xFF\xFB\xA5" + 0xE3D0899C).s, ImVec2(250, -1));
//	{
//		Sakura::Menu::Widgets::Checkbox(/*Player Hitbox Number*/XorStr<0x13, 21, 0xD4B3C2A0>("\x43\x78\x74\x6F\x72\x6A\x39\x52\x72\x68\x7F\x71\x67\x00\x6F\x57\x4E\x46\x40\x54" + 0xD4B3C2A0).s, &cvar.visual_model_hitbox);
//	}
//	ImGui::EndChild();
//	ImGui::SameLine();
//	ImGui::BeginChild(/*##omh2*/XorStr<0x4C, 7, 0x16A628A6>("\x6F\x6E\x21\x22\x38\x63" + 0x16A628A6).s, ImVec2(250, -1));
//	{
//		for (unsigned int i = 0; i < Model_Aim.size(); i++)
//		{
//			if (modelselect > Model_Aim.size() - 1)
//				modelselect = Model_Aim.size() - 1;
//
//			char str[256];
//			sprintf(str, "%s", Model_Aim[i].displaymodel);
//
//			if (Sakura::Menu::Widgets::Button(str)) modelselect = i;
//
//			if (i == modelselect)
//			{
//				static int Hitbox = 0;
//				if (Hitbox > Model_Aim[i].numhitboxes - 1)
//					Hitbox = Model_Aim[i].numhitboxes - 1;
//				ImGui::SameLine();
//				if (Sakura::Menu::Widgets::Button(/*<*/XorStr<0x89, 2, 0xECBD3DB2>("\xB5" + 0xECBD3DB2).s, {}, ImGuiDir_Left))
//				{
//					if (Hitbox > 0)Hitbox--;
//					else
//						Hitbox = Model_Aim[i].numhitboxes - 1;
//				}
//				ImGui::SameLine();
//				if (Sakura::Menu::Widgets::Button(/*>*/XorStr<0x65, 2, 0x8415AD47>("\x5B" + 0x8415AD47).s, {}, ImGuiDir_Right))
//				{
//					if (Hitbox < Model_Aim[i].numhitboxes - 1)Hitbox++;
//					else
//						Hitbox = 0;
//				}
//				ImGui::SameLine();
//				ImGui::Text("%s", GetHitboxName(Hitbox));
//				ImGui::SameLine();
//				if (Sakura::Menu::Widgets::Button(/*Add*/XorStr<0x9F, 4, 0x6CB4C485>("\xDE\xC4\xC5" + 0x6CB4C485).s))
//				{
//					bool saved = false;
//					for (const model_aim_select_t& Model_Selected : Model_Aim_Select)
//					{
//						if (!strcmp(Model_Selected.checkmodel, Model_Aim[i].checkmodel) && Model_Selected.numhitbox == Hitbox)
//						{
//							saved = true;
//							break;
//						}
//					}
//					if (!saved)
//					{
//						model_aim_select_t Model_Select;
//						sprintf(Model_Select.displaymodel, Model_Aim[i].displaymodel);
//						sprintf(Model_Select.checkmodel, Model_Aim[i].checkmodel);
//						Model_Select.numhitbox = Hitbox;
//						Model_Aim_Select.push_front(Model_Select);
//					}
//				}
//				ImGui::SameLine();
//				if (Sakura::Menu::Widgets::Button(/*All*/XorStr<0x87, 4, 0xDF739743>("\xC6\xE4\xE5" + 0xDF739743).s))
//				{
//					for (int x = Model_Aim[i].numhitboxes - 1; x >= 0; x--)
//					{
//						bool saved = false;
//						for (const model_aim_select_t& Model_Selected : Model_Aim_Select)
//						{
//							if (!strcmp(Model_Selected.checkmodel, Model_Aim[i].checkmodel) && Model_Selected.numhitbox == x)
//							{
//								saved = true;
//								break;
//							}
//						}
//						if (!saved)
//						{
//							model_aim_select_t Model_Select;
//							sprintf(Model_Select.displaymodel, Model_Aim[i].displaymodel);
//							sprintf(Model_Select.checkmodel, Model_Aim[i].checkmodel);
//							Model_Select.numhitbox = x;
//							Model_Aim_Select.push_front(Model_Select);
//						}
//					}
//				}
//				//ImGui::PopStyleColor();
//			}
//		}
//	}
//	ImGui::EndChild();
//}

//void Sakura::Menu::Tabs::Misc::SelectedHitboxes()
//{
//	ImGui::BeginChild(/*##omhs1*/XorStr<0x33, 8, 0x058D1607>("\x10\x17\x5A\x5B\x5F\x4B\x08" + 0x058D1607).s, ImVec2(250, -1));
//	{
//		for (unsigned int i = 0; i < Model_Aim_Select.size(); i++)
//		{
//			ImGui::TextColored(ImVec4(0.0f, 1.0f, 0.0f, 1.0f), "%s", Model_Aim_Select[i].displaymodel);
//
//			ImGui::SameLine();
//
//			char str[256];
//
//			sprintf(str, "+##%d", i);
//			if (Sakura::Menu::Widgets::Button(str, {}, ImGuiDir_Up))
//			{
//				if (i > 0)
//				{
//					if (!strcmp(Model_Aim_Select[i].checkmodel, Model_Aim_Select[i - 1].checkmodel))
//						std::swap(Model_Aim_Select[i], Model_Aim_Select[i - 1]);
//					else
//					{
//						if (i - 2 > 0)
//						{
//							for (int x = i - 2; x >= 0; x--)
//							{
//								if (!strcmp(Model_Aim_Select[i].checkmodel, Model_Aim_Select[x].checkmodel))
//								{
//									for (int z = i; z > x + 1; z--)
//									{
//										std::swap(Model_Aim_Select[z], Model_Aim_Select[z - 1]);
//									}
//									break;
//								}
//							}
//						}
//					}
//				}
//			}
//			if (ImGui::IsItemHovered())
//			{
//				ImGui::BeginTooltip();
//				ImGui::PushTextWrapPos(ImGui::GetFontSize() * 35.0f);
//				ImGui::TextUnformatted(/*Push Priority Front*/XorStr<0x69, 20, 0xDBE1EC27>("\x39\x1F\x18\x04\x4D\x3E\x1D\x19\x1E\x00\x1A\x00\x0C\x56\x31\x0A\x16\x14\x0F" + 0xDBE1EC27).s);
//				ImGui::PopTextWrapPos();
//				ImGui::EndTooltip();
//			}
//
//			ImGui::SameLine();
//
//			sprintf(str, "-##%d", i);
//			if (Sakura::Menu::Widgets::Button(str, {}, ImGuiDir_Down))
//			{
//				if (i + 1 < Model_Aim_Select.size())
//				{
//					if (!strcmp(Model_Aim_Select[i].checkmodel, Model_Aim_Select[i + 1].checkmodel))
//						std::swap(Model_Aim_Select[i], Model_Aim_Select[i + 1]);
//					else
//					{
//						if (i + 2 < Model_Aim_Select.size())
//						{
//							for (unsigned int x = i + 2; x < Model_Aim_Select.size(); x++)
//							{
//								if (!strcmp(Model_Aim_Select[i].checkmodel, Model_Aim_Select[x].checkmodel))
//								{
//									for (unsigned int z = i; z < x - 1; z++)
//									{
//										std::swap(Model_Aim_Select[z], Model_Aim_Select[z + 1]);
//									}
//									break;
//								}
//							}
//						}
//					}
//				}
//			}
//
//			if (ImGui::IsItemHovered())
//			{
//				ImGui::BeginTooltip();
//				ImGui::PushTextWrapPos(ImGui::GetFontSize() * 35.0f);
//				ImGui::TextUnformatted(/*Push Priority Back*/XorStr<0xD6, 19, 0x27C8B319>("\x86\xA2\xAB\xB1\xFA\x8B\xAE\xB4\xB1\xAD\x89\x95\x9B\xC3\xA6\x84\x85\x8C" + 0x27C8B319).s);
//				ImGui::PopTextWrapPos();
//				ImGui::EndTooltip();
//			}
//			ImGui::SameLine();
//			ImGui::Text("%s", GetHitboxName(Model_Aim_Select[i].numhitbox));
//
//			ImGui::SameLine();
//			sprintf(str, "Clear##%d", i);
//			if (Sakura::Menu::Widgets::Button(str))
//				Model_Aim_Select.erase(Model_Aim_Select.begin() + i);
//		}
//	}
//	ImGui::EndChild();
//	ImGui::SameLine();
//	ImGui::BeginChild(/*##omhs2*/XorStr<0x9E, 8, 0x94AF9A06>("\xBD\xBC\xCF\xCC\xCA\xD0\x96" + 0x94AF9A06).s, ImVec2(250, -1));
//	{
//		if (Sakura::Menu::Widgets::Button(/*Save Hitbox*/XorStr<0x02, 12, 0x0C47B7D3>("\x51\x62\x72\x60\x26\x4F\x61\x7D\x68\x64\x74" + 0x0C47B7D3).s)) SaveHitbox();
//		ImGui::SameLine();
//		if (Sakura::Menu::Widgets::Button(/*Load Hitbox*/XorStr<0xE8, 12, 0xEADD439A>("\xA4\x86\x8B\x8F\xCC\xA5\x87\x9B\x92\x9E\x8A" + 0xEADD439A).s)) LoadHitbox();
//		ImGui::SameLine();
//		if (Sakura::Menu::Widgets::Button(/*Clear All*/XorStr<0xF8, 10, 0x5E875C6A>("\xBB\x95\x9F\x9A\x8E\xDD\xBF\x93\x6C" + 0x5E875C6A).s)) Model_Aim_Select.deque::clear();
//	}
//	ImGui::EndChild();
//}

void Sakura::Menu::Tabs::Misc::NameStealer()
{
	ImGui::BeginChild(/*##ns1*/XorStr<0xD3, 6, 0x7793227E>("\xF0\xF7\xBB\xA5\xE6" + 0x7793227E).s, ImVec2(250, -1));
	{
		Sakura::Menu::Widgets::Checkbox(/*Enable*/XorStr<0x02, 7, 0x873F1E85>("\x47\x6D\x65\x67\x6A\x62" + 0x873F1E85).s, &cvar.misc_namestealer);
		Sakura::Menu::Widgets::Checkbox(/*Ignore off players on list*/XorStr<0xB1, 27, 0x39D42FAF>("\xF8\xD5\xDD\xDB\xC7\xD3\x97\xD7\xDF\xDC\x9B\xCC\xD1\xDF\xC6\xA5\xB3\xB1\xE3\xAB\xAB\xE6\xAB\xA1\xBA\xBE" + 0x39D42FAF).s, &cvar.misc_namestealer_playerlist);
		Sakura::Menu::Widgets::Checkbox(/*Ignore spectators*/XorStr<0x74, 18, 0xB6B1FB7D>("\x3D\x12\x18\x18\x0A\x1C\x5A\x08\x0C\x18\x1D\x0B\xE1\xF5\xED\xF1\xF7" + 0xB6B1FB7D).s, &cvar.misc_namestealer_specs);

		//ImGui::Spacing();
		//ImGui::Spacing();
		//ImGui::Spacing();

		//if (Sakura::Menu::Widgets::Button(/*Invisible name*/XorStr<0xA7, 15, 0xCA0F109F>("\xEE\xC6\xDF\xC3\xD8\xC5\xCF\xC2\xCA\x90\xDF\xD3\xDE\xD1" + 0xCA0F109F).s)) Sakura::Name::Invisible();
		//ImGui::SameLine();
		//if (Sakura::Menu::Widgets::Button(/*Green name*/XorStr<0x30, 11, 0x020F5731>("\x77\x43\x57\x56\x5A\x15\x58\x56\x55\x5C" + 0x020F5731).s)) Sakura::Name::Green();
		//ImGui::Spacing();
		//ImGui::InputText(/*Nickname*/XorStr<0x18, 9, 0xB6300948>("\x56\x70\x79\x70\x72\x7C\x73\x7A" + 0xB6300948).s, nickname, 32);
		//if (Sakura::Menu::Widgets::Button(/*Change*/XorStr<0xC6, 7, 0x36F72FDF>("\x85\xAF\xA9\xA7\xAD\xAE" + 0x36F72FDF).s)) Sakura::Name::Custom();
	}
	ImGui::EndChild();
	ImGui::SameLine();
	ImGui::BeginChild(/*##ns2*/XorStr<0xBC, 6, 0x011CAA0B>("\x9F\x9E\xD0\xCC\xF2" + 0x011CAA0B).s, ImVec2(250, -1));
	{
		ImGui::PushItemWidth(itemWidth);
		Sakura::Menu::Widgets::SliderFloat(/*Time between steal*/XorStr<0xF6, 19, 0x75DE95DE>("\xA2\x9E\x95\x9C\xDA\x99\x99\x89\x89\x9A\x65\x6F\x22\x70\x70\x60\x67\x6B" + 0x75DE95DE).s, &cvar.misc_namestealer_time, 2.f, 15.f, "%.0fs");
		ImGui::PopItemWidth();
	}
	ImGui::EndChild();
}

void Sakura::Menu::Tabs::Misc::ChatSpammer()
{
	ImGui::BeginChild(/*##ns1*/XorStr<0x98, 6, 0xAB637D7C>("\xBB\xBA\xF4\xE8\xAD" + 0xAB637D7C).s, ImVec2(250, 30));
	{
		Sakura::Menu::Widgets::Checkbox(/*Enable*/XorStr<0xC7, 7, 0xA8D5FDAF>("\x82\xA6\xA8\xA8\xA7\xA9" + 0xA8D5FDAF).s, &cvar.misc_chatspammer);
	}
	ImGui::EndChild();
	ImGui::SameLine();
	ImGui::BeginChild(/*##ns2*/XorStr<0xC3, 6, 0x2B0825BA>("\xE0\xE7\xAB\xB5\xF5" + 0x2B0825BA).s, ImVec2(250, 30));
	{
		ImGui::PushItemWidth(itemWidth);
		Sakura::Menu::Widgets::SliderFloat(/*Chat spammer time*/XorStr<0xED, 18, 0x6347BCD9>("\xAE\x86\x8E\x84\xD1\x81\x83\x95\x98\x9B\x92\x8A\xD9\x8E\x92\x91\x98" + 0x6347BCD9).s, &cvar.misc_chatspammer_time, 2.f, 25.f, "%.0fs");
		ImGui::PopItemWidth();
	}
	ImGui::EndChild();
	ImGui::Text(/*Message*/XorStr<0xCC, 8, 0xE278D1E6>("\x81\xA8\xBD\xBC\xB1\xB6\xB7" + 0xE278D1E6).s);
	ImGui::PushItemWidth(itemWidth * 2);
	ImGui::InputText("", chatspam, 128);
	ImGui::PopItemWidth();
}

void Sakura::Menu::Tabs::Misc::Config()
{
	static int loadedConfig = selectedConfig;

	ImGui::BeginChild(/*##mc1*/XorStr<0xD6, 6, 0xDEE8EC02>("\xF5\xF4\xB5\xBA\xEB" + 0xDEE8EC02).s, ImVec2(250, -1));
	{
		const char** items = new const char*[configs.size()];
		ImGuiWindow* window = ImGui::GetCurrentWindow();

		for (size_t i = 0; i < configs.size(); i++) {
			char* copy = new char[configs[i].size() + 1];

			std::strcpy(copy, configs[i].c_str());

			items[i] = copy;
		}

		ImGui::PushStyleColor(ImGuiCol_Header, (ImVec4)Sakura::Menu::GetMenuColor(0.39f));
		ImGui::PushStyleColor(ImGuiCol_HeaderHovered, (ImVec4)Sakura::Menu::GetMenuColor(0.80f));
		ImGui::PushStyleColor(ImGuiCol_HeaderActive, (ImVec4)Sakura::Menu::GetMenuColor(1.00f));
		ImGui::PushStyleColor(ImGuiCol_FrameBg, (ImVec4)ImColor(0, 0, 0, 50));
		ImGui::BeginListBox(/*##configslist*/XorStr<0x00, 14, 0x769FFB02>("\x23\x22\x61\x6C\x6A\x63\x6F\x60\x7B\x65\x63\x78\x78" + 0x769FFB02).s, ImVec2(250, -1));
		{
			for (int i = 0; i < configs.size(); i++)
			{
				bool is_selected = (selectedConfig == i);
				if (ImGui::Selectable(configs[i].c_str(), &is_selected))
				{
					selectedConfig = i;
				}

				if (defaultConfig == i)
				{
					ImGui::SameLine();
					ImGui::PushFont(Sakura::Menu::Fonts::icons);
					ImGui::PushStyleColor(ImGuiCol_Text, ImVec4(1.f, 1.f, 0.f, 1.f));
					ImGui::SetCursorPosX(ImGui::GetCursorPosX() - 5);
					ImGui::SetCursorPosY(ImGui::GetCursorPosY() - 5);
					ImGui::Text(/*g*/XorStr<0x64, 2, 0xA25B40C7>("\x03" + 0xA25B40C7).s);
					ImGui::PopStyleColor();
					ImGui::PopFont();
				}

				if (loadedConfig == i)
				{
					ImGui::SameLine();
					ImGui::PushFont(Sakura::Menu::Fonts::icons);
					ImGui::PushStyleColor(ImGuiCol_Text, ImVec4(0.f, 1.f, 0.f, 1.f));
					ImGui::SetCursorPosX(ImGui::GetCursorPosX() - 10);
					ImGui::SetCursorPosY(ImGui::GetCursorPosY() - 5);
					ImGui::Text(/*h*/XorStr<0xD6, 2, 0x6A75677A>("\xBE" + 0x6A75677A).s);
					ImGui::PopStyleColor();
					ImGui::PopFont();
				}
			}
		}
		ImGui::EndListBox();
		ImGui::PopStyleColor(4);
		// is this nessecary?
		for (size_t i = 0; i < configs.size(); i++) {
			delete[] items[i];  // deallocate the copies of the strings
		}
		delete[] items;
	}
	ImGui::EndChild();
	ImGui::SameLine();
	ImGui::BeginChild(/*##mc2*/XorStr<0x55, 6, 0xB5FD1983>("\x76\x75\x3A\x3B\x6B" + 0xB5FD1983).s, ImVec2(250, -1));
	{
		ImGui::InputText("", newconfig, 256);
		ImGui::SameLine();
		if (Sakura::Menu::Widgets::Button(/*Create*/XorStr<0x7C, 7, 0x69A6E480>("\x3F\x0F\x1B\x1E\xF4\xE4" + 0x69A6E480).s, { 75, 0 }))
		{
			std::string e = /*.ini*/XorStr<0x08, 5, 0xF8110B7F>("\x26\x60\x64\x62" + 0xF8110B7F).s;
			std::string temp = newconfig + e;
			configs.push_back(temp);

			Toast::Create({ 3, /*Created config %s*/XorStr<0xD0,18,0x49BAC5C2>("\x93\xA3\xB7\xB2\xA0\xB0\xB2\xF7\xBB\xB6\xB4\xBD\xB5\xBA\xFE\xFA\x93" + 0x49BAC5C2).s, temp.c_str() });
		}

		ImGui::Spacing();

		if (Sakura::Menu::Widgets::Button(/*Load config*/XorStr<0xE3, 12, 0x042819E3>("\xAF\x8B\x84\x82\xC7\x8B\x86\x84\x8D\x85\x8A" + 0x042819E3).s, { ImGui::GetWindowSize().x - 6, 0 }))
		{
			LoadCvar();
			loadedConfig = selectedConfig;
			Toast::Create({ 3, /*Loaded config %s*/XorStr<0xAC,17,0x6F567414>("\xE0\xC2\xCF\xCB\xD5\xD5\x92\xD0\xDB\xDB\xD0\xDE\xDF\x99\x9F\xC8" + 0x6F567414).s, configs[selectedConfig].c_str() });

			if (cvar.gui_key < 0 || cvar.gui_key > 254)
				cvar.gui_key = K_INS;
		}

		if (Sakura::Menu::Widgets::Button(/*Save Config*/XorStr<0x8F, 12, 0x7F254F47>("\xDC\xF1\xE7\xF7\xB3\xD7\xFA\xF8\xF1\xF1\xFE" + 0x7F254F47).s, { ImGui::GetWindowSize().x - 6, 0 }))
		{
			SaveCvar();
			Toast::Create({ 3, /*Saved config %s*/XorStr<0x85,16,0x55B424ED>("\xD6\xE7\xF1\xED\xED\xAA\xE8\xE3\xE3\xE8\xE6\xF7\xB1\xB7\xE0" + 0x55B424ED).s, configs[selectedConfig].c_str() });
		}

		if (Sakura::Menu::Widgets::Button(/*Reload Config*/XorStr<0xA1, 14, 0xAF8631AF>("\xF3\xC7\xCF\xCB\xC4\xC2\x87\xEB\xC6\xC4\xCD\xC5\xCA" + 0xAF8631AF).s, { ImGui::GetWindowSize().x - 6, 0 }))
		{
			LoadCvar();
			Toast::Create({ 3, /*Reloaded config %s*/XorStr<0xC8,19,0x69BECD03>("\x9A\xAC\xA6\xA4\xAD\xA9\xAB\xAB\xF0\xB2\xBD\xBD\xB2\xBC\xB1\xF7\xFD\xAA" + 0x69BECD03).s, configs[selectedConfig].c_str() });
		}

		if (Sakura::Menu::Widgets::Button(/*Make Config Default*/XorStr<0xFA, 20, 0x11A0245F>("\xB7\x9A\x97\x98\xDE\xBC\x6F\x6F\x64\x6A\x63\x25\x42\x62\x6E\x68\x7F\x67\x78" + 0x11A0245F).s, { ImGui::GetWindowSize().x - 6, 0 }))
		{
			defaultConfig = selectedConfig;
			saveDefaultConfig();
			Toast::Create({ 3, /*Config %s is now default!*/XorStr<0xC6,26,0x1E02EDE2>("\x85\xA8\xA6\xAF\xA3\xAC\xEC\xE8\xBD\xEF\xB9\xA2\xF2\xBD\xBB\xA2\xF6\xB3\xBD\xBF\xBB\xAE\xB0\xA9\xFF" + 0x1E02EDE2).s, configs[selectedConfig].c_str() });
		}

		if (Sakura::Menu::Widgets::Button(/*Reload Lua*/XorStr<0x12, 11, 0x8D4E7E59>("\x40\x76\x78\x7A\x77\x73\x38\x55\x6F\x7A" + 0x8D4E7E59).s, { ImGui::GetWindowSize().x - 6, 0 }))
		{
			Sakura::Lua::Reload();
			Toast::Create({ 3, /*Reloaded LUA*/XorStr<0xA8,13,0x688BFE62>("\xFA\xCC\xC6\xC4\xCD\xC9\xCB\xCB\x90\xFD\xE7\xF2" + 0x688BFE62).s, configs[selectedConfig].c_str() });
		}

		ImGui::Spacing();
		ImGui::Spacing();

		Sakura::Menu::Widgets::Checkbox(/*Auto config save*/XorStr<0xCD, 17, 0x6F10C702>("\x8C\xBB\xBB\xBF\xF1\xB1\xBC\xBA\xB3\xBF\xB0\xF8\xAA\xBB\xAD\xB9" + 0x6F10C702).s, &cvar.misc_auto_config_save);
	}
	ImGui::EndChild();
}

void Sakura::Menu::Tabs::Misc::Information()
{
	ImGui::Text(/*Welcome! nothing usefull can be found here.*/XorStr<0xFF, 44, 0x5B5895EA>("\xA8\x65\x6D\x61\x6C\x69\x60\x27\x27\x66\x66\x7E\x63\x65\x63\x69\x2F\x65\x62\x77\x75\x61\x79\x7A\x37\x7B\x78\x74\x3B\x7E\x78\x3E\x79\x4F\x54\x4C\x47\x04\x4D\x43\x55\x4D\x07" + 0x5B5895EA).s);
	ImGui::Spacing();
	ImGui::Spacing();
	ImGui::Spacing();
	ImGui::Text(/*The cheat has been created by 'Max "Maxine" Caulfield'*/XorStr<0x09, 55, 0x56B88DAF>("\x5D\x62\x6E\x2C\x6E\x66\x6A\x71\x65\x32\x7B\x75\x66\x36\x75\x7D\x7C\x74\x3B\x7F\x6F\x7B\x7E\x54\x44\x46\x03\x46\x5C\x06\x00\x65\x48\x52\x0B\x0E\x60\x4F\x57\x59\x5F\x57\x11\x14\x76\x57\x42\x54\x5F\x53\x5E\x50\x59\x19" + 0x56B88DAF).s);
	ImGui::Text(/*Special thanks to:*/XorStr<0xC2, 19, 0x95143EAB>("\x91\xB3\xA1\xA6\xAF\xA6\xA4\xE9\xBE\xA3\xAD\xA3\xA5\xBC\xF0\xA5\xBD\xE9" + 0x95143EAB).s);
	
	ImGui::Text(/* - */XorStr<0xBA, 4, 0xDDAF9BC7>("\x9A\x96\x9C" + 0xDDAF9BC7).s);
	ImGui::SameLine();
	ImGui::TextColored(ImColor(1.f, 1.f, 0.5f, 1.f), /*B# (coding)*/XorStr<0xCC, 12, 0x3B733E67>("\x8E\xEE\xEE\xE7\xB3\xBE\xB6\xBA\xBA\xB2\xFF" + 0x3B733E67).s);

	ImGui::Text(/* - */XorStr<0x17, 4, 0x51236D2A>("\x37\x35\x39" + 0x51236D2A).s);
	ImGui::SameLine();
	ImGui::TextColored(ImColor(0.5f, 0.5f, 1.f, 1.f), /*Flow of Life (Motivation and inspiration)*/XorStr<0x9A, 42, 0x36F64499>("\xDC\xF7\xF3\xEA\xBE\xF0\xC6\x81\xEE\xCA\xC2\xC0\x86\x8F\xE5\xC6\xDE\xC2\xDA\xCC\xDA\xC6\xDF\xDF\x92\xD2\xDA\xD1\x96\xDE\xD6\xCA\xCA\xD2\xCE\xDC\xCA\xD6\xAF\xAF\xEB" + 0x36F64499).s);

	ImGui::Spacing();

	ImGui::Text(/* - */XorStr<0x0C, 4, 0xC8FFE9D0>("\x2C\x20\x2E" + 0xC8FFE9D0).s);
	ImGui::SameLine();
	ImGui::TextColored(ImColor(0.5f, 0.5f, 1.f, 1.f), /*lui1337(tests) */XorStr<0x5B, 16, 0x0D1E3F8D>("\x37\x29\x34\x6F\x6C\x53\x56\x42\x4B\x10\x00\x15\x13\x1B\x40" + 0x0D1E3F8D).s);

	ImGui::Spacing();
	ImGui::Spacing();
	ImGui::Spacing();
}