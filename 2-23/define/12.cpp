void Changemove() { void unmove(); //void getCoor(); //getCoor(); void drawCoor(); drawCoor(); switch (dir) { case 1: switch (ch) { case 1: case 2: //能移动 if (Map[coor.CRow[0]][coor.CCol[0] - 1] == 0 && Map[coor.CRow[2]][coor.CCol[2] - 1] == 0 && coor.CCol[0] > 0) { Map[coor.CRow[3]][coor.CCol[3]] = 0; Map[coor.CRow[1]][coor.CCol[1]] = 0; Map[coor.CRow[0]][coor.CCol[0] - 1] = 1; Map[coor.CRow[2]][coor.CCol[2] - 1] = 1; } //不能移动 break; case 3: //能移动 if (Map[coor.CRow[0]][coor.CCol[0] - 1] == 0 && Map[coor.CRow[1]][coor.CCol[1] - 1] == 0 && Map[coor.CRow[3]][coor.CCol[3] - 1] == 0 && coor.CCol[3] > 0) { Map[coor.CRow[0]][coor.CCol[0]] = 0; Map[coor.CRow[2]][coor.CCol[2]] = 0; Map[coor.CRow[3]][coor.CCol[3]] = 0; Map[coor.CRow[0]][coor.CCol[0] - 1] = 1; Map[coor.CRow[1]][coor.CCol[1] - 1] = 1; Map[coor.CRow[3]][coor.CCol[3] - 1] = 1; } break; case 4: //能移动 if (Map[coor.CRow[0]][coor.CCol[0] - 1] == 0 && Map[coor.CRow[2]][coor.CCol[2] - 1] == 0 && coor.CCol[2] > 0) { Map[coor.CRow[1]][coor.CCol[1]] = 0; Map[coor.CRow[3]][coor.CCol[3]] = 0; Map[coor.CRow[0]][coor.CCol[0] - 1] = 1; Map[coor.CRow[2]][coor.CCol[2] - 1] = 1; } //不能移动 break; case 5: //能移动 if (Map[coor.CRow[0]][coor.CCol[0] - 1] == 0 && Map[coor.CRow[1]][coor.CCol[1] - 1] == 0 && Map[coor.CRow[3]][coor.CCol[3] - 1] == 0 && coor.CCol[0] > 0) { Map[coor.CRow[0]][coor.CCol[0]] = 0; Map[coor.CRow[2]][coor.CCol[2]] = 0; Map[coor.CRow[3]][coor.CCol[3]] = 0; Map[coor.CRow[0]][coor.CCol[0] - 1] = 1; Map[coor.CRow[1]][coor.CCol[1] - 1] = 1; Map[coor.CRow[3]][coor.CCol[3] - 1] = 1; } //不能移动 break; case 6: //能移动 if (Map[coor.CRow[0]][coor.CCol[0] - 1] == 0 && Map[coor.CRow[2]][coor.CCol[2] - 1] == 0 && Map[coor.CRow[3]][coor.CCol[3] - 1] == 0 && coor.CCol[0] > 0) { Map[coor.CRow[1]][coor.CCol[1]] = 0; Map[coor.CRow[2]][coor.CCol[2]] = 0; Map[coor.CRow[3]][coor.CCol[3]] = 0; Map[coor.CRow[0]][coor.CCol[0] - 1] = 1; Map[coor.CRow[2]][coor.CCol[2] - 1] = 1; Map[coor.CRow[3]][coor.CCol[3] - 1] = 1; } //不能移动 break; case 7: //能移动 if (Map[coor.CRow[1]][coor.CCol[1] - 1] == 0 & Map[coor.CRow[0]][coor.CCol[0] - 1] == 0 && coor.CCol[1] > 0) { Map[coor.CRow[0]][coor.CCol[0]] = 0; Map[coor.CRow[3]][coor.CCol[3]] = 0; Map[coor.CRow[0]][coor.CCol[0] - 1] = 1; Map[coor.CRow[1]][coor.CCol[1] - 1] = 1; } break; case 8: //能 if (Map[coor.CRow[0]][coor.CCol[0] - 1] == 0 && Map[coor.CRow[1]][coor.CCol[1] - 1] == 0 && Map[coor.CRow[2]][coor.CCol[2] - 1] == 0 && coor.CCol[0] > 0) { Map[coor.CRow[0]][coor.CCol[0] - 1] = 1; Map[coor.CRow[1]][coor.CCol[1] - 1] = 1; Map[coor.CRow[2]][coor.CCol[2] - 1] = 1; Map[coor.CRow[0]][coor.CCol[0]] = 0; Map[coor.CRow[1]][coor.CCol[1]] = 0; Map[coor.CRow[3]][coor.CCol[3]] = 0; } break; case 9: if (Map[coor.CRow[0]][coor.CCol[0] - 1] == 0 && Map[coor.CRow[3]][coor.CCol[3] - 1] == 0 && coor.CCol[0] > 0) { Map[coor.CRow[0]][coor.CCol[0] - 1] = 1; Map[coor.CRow[3]][coor.CCol[3] - 1] = 1; Map[coor.CRow[3]][coor.CCol[3]] = 0; Map[coor.CRow[2]][coor.CCol[2]] = 0; } break; case 10: //能移动 if (Map[coor.CRow[0]][coor.CCol[0] - 1] == 0 && Map[coor.CRow[3]][coor.CCol[3] - 1] == 0 && Map[coor.CRow[2]][coor.CCol[2] - 1] == 0 && coor.CCol[0] > 0) { Map[coor.CRow[0]][coor.CCol[0] - 1] = 1; Map[coor.CRow[2]][coor.CCol[2] - 1] = 1; Map[coor.CRow[3]][coor.CCol[3] - 1] = 1; Map[coor.CRow[1]][coor.CCol[1]] = 0; Map[coor.CRow[2]][coor.CCol[2]] = 0; Map[coor.CRow[3]][coor.CCol[3]] = 0; } //不能移动 break; case 11: //能移动 if (Map[coor.CRow[0]][coor.CCol[0] - 1] == 0 && Map[coor.CRow[3]][coor.CCol[3] - 1] == 0 && coor.CCol[0] > 0) { Map[coor.CRow[0]][coor.CCol[0] - 1] = 1; Map[coor.CRow[3]][coor.CCol[3] - 1] = 1; Map[coor.CRow[2]][coor.CCol[2]] = 0; Map[coor.CRow[3]][coor.CCol[3]] = 0; } break; case 12: //能 if (Map[coor.CRow[0]][coor.CCol[0] - 1] == 0 && Map[coor.CRow[1]][coor.CCol[1] - 1] == 0 && Map[coor.CRow[2]][coor.CCol[2] - 1] == 0 && coor.CCol[2] > 0) { Map[coor.CRow[0]][coor.CCol[0] - 1] = 1; Map[coor.CRow[1]][coor.CCol[1] - 1] = 1; Map[coor.CRow[2]][coor.CCol[2] - 1] = 1; Map[coor.CRow[0]][coor.CCol[0]] = 0; Map[coor.CRow[1]][coor.CCol[1]] = 0; Map[coor.CRow[3]][coor.CCol[3]] = 0; } break; case 13: if (Map[coor.CRow[0]][coor.CCol[0] - 1] == 0 && Map[coor.CRow[1]][coor.CCol[1] - 1] == 0 && coor.CCol[0] > 0) { Map[coor.CRow[0]][coor.CCol[0] - 1] = 1; Map[coor.CRow[1]][coor.CCol[1] - 1] = 1; Map[coor.CRow[0]][coor.CCol[0]] = 0; Map[coor.CRow[3]][coor.CCol[3]] = 0; } break; case 14: for (int i = 0; i < 4; i++) { if (Map[coor.CRow[i]][coor.CCol[i] - 1] == 0) { if (coor.CCol[0] > 0) { if (i == 3) { Map[coor.CRow[0]][coor.CCol[0]] = 0; Map[coor.CRow[1]][coor.CCol[1]] = 0; Map[coor.CRow[2]][coor.CCol[2]] = 0; Map[coor.CRow[3]][coor.CCol[3]] = 0; Map[coor.CRow[0]][coor.CCol[0] - 1] = 1; Map[coor.CRow[1]][coor.CCol[1] - 1] = 1; Map[coor.CRow[2]][coor.CCol[2] - 1] = 1; Map[coor.CRow[3]][coor.CCol[3] - 1] = 1; } continue; } } } break; case 15: if (Map[coor.CRow[0]][coor.CCol[0] - 1] == 0 && coor.CCol[0] > 0) { Map[coor.CRow[3]][coor.CCol[3]] = 0; Map[coor.CRow[0]][coor.CCol[0] - 1] = 1; } break; } break; case 2: switch (ch) { case 1: case 2: //能移动 if (Map[coor.CRow[1]][coor.CCol[1] + 1] == 0 && Map[coor.CRow[3]][coor.CCol[3] + 1] == 0 && coor.CCol[3] < 9) { Map[coor.CRow[0]][coor.CCol[0]] = 0; Map[coor.CRow[2]][coor.CCol[2]] = 0; Map[coor.CRow[1]][coor.CCol[1] + 1] = 1; Map[coor.CRow[3]][coor.CCol[3] + 1] = 1; } //不能移动 break; case 3: //能移动 if (Map[coor.CRow[0]][coor.CCol[0] + 1] == 0 && Map[coor.CRow[2]][coor.CCol[2] + 1] == 0 && Map[coor.CRow[3]][coor.CCol[3] + 1] == 0 && coor.CCol[0] < 9) { Map[coor.CRow[0]][coor.CCol[0]] = 0; Map[coor.CRow[1]][coor.CCol[1]] = 0; Map[coor.CRow[3]][coor.CCol[3]] = 0; Map[coor.CRow[0]][coor.CCol[0] + 1] = 1; Map[coor.CRow[2]][coor.CCol[2] + 1] = 1; Map[coor.CRow[3]][coor.CCol[3] + 1] = 1; } break; case 4: //能移动 if (Map[coor.CRow[1]][coor.CCol[1] + 1] == 0 && Map[coor.CRow[3]][coor.CCol[3] + 1] == 0 && coor.CCol[1] < 9) { Map[coor.CRow[0]][coor.CCol[0]] = 0; Map[coor.CRow[2]][coor.CCol[2]] = 0; Map[coor.CRow[1]][coor.CCol[1] + 1] = 1; Map[coor.CRow[3]][coor.CCol[3] + 1] = 1; } //不能移动 break; case 5: //能移动 if (Map[coor.CRow[0]][coor.CCol[0] + 1] == 0 && Map[coor.CRow[2]][coor.CCol[2] + 1] == 0 && Map[coor.CRow[3]][coor.CCol[3] + 1] == 0 && coor.CCol[3] < 9) { Map[coor.CRow[0]][coor.CCol[0]] = 0; Map[coor.CRow[1]][coor.CCol[1]] = 0; Map[coor.CRow[3]][coor.CCol[3]] = 0; Map[coor.CRow[0]][coor.CCol[0] + 1] = 1; Map[coor.CRow[2]][coor.CCol[2] + 1] = 1; Map[coor.CRow[3]][coor.CCol[3] + 1] = 1; } //不能移动 break; case 6: //能移动 if (Map[coor.CRow[1]][coor.CCol[1] + 1] == 0 && Map[coor.CRow[2]][coor.CCol[2] + 1] == 0 && Map[coor.CRow[3]][coor.CCol[3] + 1] == 0 && coor.CCol[3] < 9) { Map[coor.CRow[0]][coor.CCol[0]] = 0; Map[coor.CRow[2]][coor.CCol[2]] = 0; Map[coor.CRow[3]][coor.CCol[3]] = 0; Map[coor.CRow[1]][coor.CCol[1] + 1] = 1; Map[coor.CRow[2]][coor.CCol[2] + 1] = 1; Map[coor.CRow[3]][coor.CCol[3] + 1] = 1; } //不能移动 break; case 7: //能移动 if (Map[coor.CRow[3]][coor.CCol[3] + 1] == 0 & Map[coor.CRow[0]][coor.CCol[0] + 1] == 0 && coor.CCol[0] < 9) { Map[coor.CRow[0]][coor.CCol[0]] = 0; Map[coor.CRow[1]][coor.CCol[1]] = 0; Map[coor.CRow[0]][coor.CCol[0] + 1] = 1; Map[coor.CRow[3]][coor.CCol[3] + 1] = 1; } break; case 8: //能 if (Map[coor.CRow[0]][coor.CCol[0] + 1] == 0 && Map[coor.CRow[1]][coor.CCol[1] + 1] == 0 && Map[coor.CRow[3]][coor.CCol[3] + 1] == 0 && coor.CCol[3] < 9) { Map[coor.CRow[0]][coor.CCol[0] + 1] = 1; Map[coor.CRow[1]][coor.CCol[1] + 1] = 1; Map[coor.CRow[3]][coor.CCol[3] + 1] = 1; Map[coor.CRow[0]][coor.CCol[0]] = 0; Map[coor.CRow[1]][coor.CCol[1]] = 0; Map[coor.CRow[2]][coor.CCol[2]] = 0; } break; case 9: if (Map[coor.CRow[2]][coor.CCol[2] + 1] == 0 && Map[coor.CRow[3]][coor.CCol[3] + 1] == 0 && coor.CCol[2] < 9) { Map[coor.CRow[2]][coor.CCol[2] + 1] = 1; Map[coor.CRow[3]][coor.CCol[3] + 1] = 1; Map[coor.CRow[3]][coor.CCol[3]] = 0; Map[coor.CRow[0]][coor.CCol[0]] = 0; } break; case 10: //能移动 if (Map[coor.CRow[1]][coor.CCol[1] + 1] == 0 && Map[coor.CRow[2]][coor.CCol[2] + 1] == 0 && Map[coor.CRow[3]][coor.CCol[3] + 1] == 0 && coor.CCol[1] < 9) { Map[coor.CRow[1]][coor.CCol[1] + 1] = 1; Map[coor.CRow[2]][coor.CCol[2] + 1] = 1; Map[coor.CRow[3]][coor.CCol[3] + 1] = 1; Map[coor.CRow[0]][coor.CCol[0]] = 0; Map[coor.CRow[2]][coor.CCol[2]] = 0; Map[coor.CRow[3]][coor.CCol[3]] = 0; } //不能移动 break; case 11: //能移动 if (Map[coor.CRow[2]][coor.CCol[2] + 1] == 0 && Map[coor.CRow[3]][coor.CCol[3] + 1] == 0 && coor.CCol[3] < 9) { Map[coor.CRow[2]][coor.CCol[2] + 1] = 1; Map[coor.CRow[3]][coor.CCol[3] + 1] = 1; Map[coor.CRow[0]][coor.CCol[0]] = 0; Map[coor.CRow[3]][coor.CCol[3]] = 0; } break; case 12: //能 if (Map[coor.CRow[0]][coor.CCol[0] + 1] == 0 && Map[coor.CRow[1]][coor.CCol[1] + 1] == 0 && Map[coor.CRow[3]][coor.CCol[3] + 1] == 0 && coor.CCol[0] < 9) { Map[coor.CRow[0]][coor.CCol[0] + 1] = 1; Map[coor.CRow[1]][coor.CCol[1] + 1] = 1; Map[coor.CRow[3]][coor.CCol[3] + 1] = 1; Map[coor.CRow[0]][coor.CCol[0]] = 0; Map[coor.CRow[1]][coor.CCol[1]] = 0; Map[coor.CRow[2]][coor.CCol[2]] = 0; } break; case 13: if (Map[coor.CRow[0]][coor.CCol[0] + 1] == 0 && Map[coor.CRow[3]][coor.CCol[3] + 1] == 0 && coor.CCol[3] < 9) { Map[coor.CRow[0]][coor.CCol[0] + 1] = 1; Map[coor.CRow[3]][coor.CCol[3] + 1] = 1; Map[coor.CRow[0]][coor.CCol[0]] = 0; Map[coor.CRow[1]][coor.CCol[1]] = 0; } break; case 14: for (int i = 0; i < 4; i++) { if (Map[coor.CRow[i]][coor.CCol[i] + 1] == 0) { if (coor.CCol[0] < 9) { if (i == 3) { Map[coor.CRow[0]][coor.CCol[0]] = 0; Map[coor.CRow[1]][coor.CCol[1]] = 0; Map[coor.CRow[2]][coor.CCol[2]] = 0; Map[coor.CRow[3]][coor.CCol[3]] = 0; Map[coor.CRow[0]][coor.CCol[0] + 1] = 1; Map[coor.CRow[1]][coor.CCol[1] + 1] = 1; Map[coor.CRow[2]][coor.CCol[2] + 1] = 1; Map[coor.CRow[3]][coor.CCol[3] + 1] = 1; } } } } break; case 15: if (Map[coor.CRow[3]][coor.CCol[3] + 1] == 0 && coor.CCol[3] < 9) { Map[coor.CRow[0]][coor.CCol[0]] = 0; Map[coor.CRow[3]][coor.CCol[3] + 1] = 1; } break; } break; //变形 case 3: switch (ch) { case 2: if (Map[coor.CRow[2]][coor.CCol[2] - 1] == 0 && Map[coor.CRow[0] - 1][coor.CCol[0]] == 0 && Map[coor.CRow[1] - 1][coor.CCol[1]] == 0) { Map[coor.CRow[2]][coor.CCol[2]] = 0; Map[coor.CRow[3]][coor.CCol[3]] = 0; Map[coor.CRow[1] - 1][coor.CCol[1]] = 1; Map[coor.CRow[0] + 1][coor.CCol[0]] = 1; ch = 3; } break; case 3: if (Map[coor.CRow[0]][coor.CCol[0] + 1] == 0 && Map[coor.CRow[0]][coor.CCol[0] - 1] == 0 && Map[coor.CRow[3]][coor.CCol[3] - 1] == 0 && Map[coor.CRow[1]][coor.CCol[1] - 1] == 0 && coor.CCol[0] < 9) { Map[coor.CRow[1]][coor.CCol[1]] = 0; Map[coor.CRow[3]][coor.CCol[3]] = 0; Map[coor.CRow[0]][coor.CCol[0] - 1] = 1; Map[coor.CRow[2]][coor.CCol[2] + 1] = 1; ch = 2; } break; case 4: if (Map[coor.CRow[0]][coor.CCol[0] - 1] == 0 && Map[coor.CRow[1] + 1][coor.CCol[1]] == 0 && Map[coor.CRow[0]][coor.CCol[0] - 1] == 0) { Map[coor.CRow[3]][coor.CCol[3]] = 0; Map[coor.CRow[2]][coor.CCol[2]] = 0; Map[coor.CRow[0] - 1][coor.CCol[0]] = 1; Map[coor.CRow[1] + 1][coor.CCol[1]] = 1; ch = 5; } break; case 5: if (Map[coor.CRow[0]][coor.CCol[0] + 1] == 0 && Map[coor.CRow[3]][coor.CCol[3] - 1] == 0 && Map[coor.CRow[1]][coor.CCol[1] - 1] == 0 && coor.CCol[0] > 0) { Map[coor.CRow[2]][coor.CCol[2]] = 0; Map[coor.CRow[3]][coor.CCol[3]] = 0; Map[coor.CRow[0]][coor.CCol[0] + 1] = 1; Map[coor.CRow[1]][coor.CCol[1] - 1] = 1; ch = 4; } break; case 6: if (Map[coor.CRow[0] - 1][coor.CCol[0]] == 0 && Map[coor.CRow[0] + 1][coor.CCol[0]] == 0 && Map[coor.CRow[1] - 1][coor.CCol[1]] == 0 && Map[coor.CRow[1]][coor.CCol[1] + 1] == 0 && Map[coor.CRow[2]][coor.CCol[2] + 1] == 0 && Map[coor.CRow[3]][coor.CCol[3] - 1] == 0 && coor.CCol[1] < 9) { Map[coor.CRow[0]][coor.CCol[0]] = 0; Map[coor.CRow[1]][coor.CCol[1]] = 0; Map[coor.CRow[3]][coor.CCol[3]] = 0; Map[coor.CRow[1]][coor.CCol[1] + 1] = 1; Map[coor.CRow[2]][coor.CCol[2] + 1] = 1; Map[coor.CRow[2]][coor.CCol[2] - 1] = 1; ch = 7; } break; case 7: if (Map[coor.CRow[0] - 1][coor.CCol[0] - 1] == 0 && Map[coor.CRow[0] - 1][coor.CCol[0] - 2] == 0 && Map[coor.CRow[0]][coor.CCol[0] - 1] == 0 && Map[coor.CRow[0]][coor.CCol[0] - 2] == 0) { Map[coor.CRow[0]][coor.CCol[0]] = 0; Map[coor.CRow[1]][coor.CCol[1]] = 0; Map[coor.CRow[0]][coor.CCol[0] - 1] = 1; Map[coor.CRow[0] - 1][coor.CCol[0] - 1] = 1; ch = 8; } break; case 8: if (Map[coor.CRow[0]][coor.CCol[0] + 1] == 0 && Map[coor.CRow[1]][coor.CCol[1] - 1] == 0 && Map[coor.CRow[1]][coor.CCol[1] + 1] == 0 && Map[coor.CRow[2] + 1][coor.CCol[2]] == 0 && Map[coor.CRow[3] + 1][coor.CCol[3]] == 0 && Map[coor.CRow[2]][coor.CCol[2] - 1] == 0 && coor.CCol[0] > 0) { Map[coor.CRow[0]][coor.CCol[0]] = 0; Map[coor.CRow[2]][coor.CCol[2]] = 0; Map[coor.CRow[3]][coor.CCol[3]] = 0; Map[coor.CRow[1]][coor.CCol[1] + 1] = 1; Map[coor.CRow[1]][coor.CCol[1] - 1] = 1; Map[coor.CRow[2]][coor.CCol[2] - 1] = 1; ch = 9; } break; case 9: if (Map[coor.CRow[0] - 1][coor.CCol[0]] == 0 && Map[coor.CRow[0]][coor.CCol[0] - 1] == 0 && Map[coor.CRow[3]][coor.CCol[3] - 1] == 0 && Map[coor.CRow[3]][coor.CCol[3] + 1] == 0 && Map[coor.CRow[1] - 1][coor.CCol[1]] == 0 && Map[coor.CRow[2] + 1][coor.CCol[2]] == 0) { Map[coor.CRow[0]][coor.CCol[0]] = 0; Map[coor.CRow[2]][coor.CCol[2]] = 0; Map[coor.CRow[3]][coor.CCol[3]] = 0; Map[coor.CRow[0] - 1][coor.CCol[0]] = 1; Map[coor.CRow[1] - 1][coor.CCol[1]] = 1; Map[coor.CRow[1] + 1][coor.CCol[1]] = 1; ch = 6; } break; case 10: if (Map[coor.CRow[0] - 1][coor.CCol[0]] == 0 && Map[coor.CRow[0]][coor.CCol[0] - 1] == 0 && Map[coor.CRow[3]][coor.CCol[3] - 1] == 0 && Map[coor.CRow[2]][coor.CCol[2] + 1] == 0 && Map[coor.CRow[1] - 1][coor.CCol[1]] == 0 && Map[coor.CRow[2]][coor.CCol[2] - 1] == 0 && coor.CCol[0] > 0) { Map[coor.CRow[2]][coor.CCol[2]] = 0; Map[coor.CRow[3]][coor.CCol[3]] = 0; Map[coor.CRow[0]][coor.CCol[0] - 1] = 1; Map[coor.CRow[1] + 1][coor.CCol[1]] = 1; ch = 11; } break; case 11: if (Map[coor.CRow[0] - 1][coor.CCol[0]] == 0 && Map[coor.CRow[0] + 1][coor.CCol[0]] == 0 && Map[coor.CRow[1] - 1][coor.CCol[1]] == 0 && Map[coor.CRow[1] + 1][coor.CCol[1]] == 0 && Map[coor.CRow[2] - 1][coor.CCol[2]] == 0 && Map[coor.CRow[2]][coor.CCol[2] + 1] == 0 && Map[coor.CRow[3]][coor.CCol[3] + 1] == 0) { Map[coor.CRow[0]][coor.CCol[0]] = 0; Map[coor.CRow[1]][coor.CCol[1]] = 0; Map[coor.CRow[2] - 1][coor.CCol[2]] = 1; Map[coor.CRow[3]][coor.CCol[3] - 1] = 1; ch = 12; } break; case 12: if (Map[coor.CRow[0]][coor.CCol[0] + 1] == 0 && Map[coor.CRow[1]][coor.CCol[1] + 1] == 0 && Map[coor.CRow[2] - 1][coor.CCol[2]] == 0 && Map[coor.CRow[2] + 1][coor.CCol[2]] == 0 && Map[coor.CRow[3] + 1][coor.CCol[3]] == 0 && Map[coor.CRow[3]][coor.CCol[3] + 1] == 0 && coor.CCol[0] < 9) { Map[coor.CRow[0]][coor.CCol[0]] = 0; Map[coor.CRow[1]][coor.CCol[1]] = 0; Map[coor.CRow[2] - 1][coor.CCol[2]] = 1; Map[coor.CRow[3]][coor.CCol[3] + 1] = 1; ch = 13; } break; case 13: if (Map[coor.CRow[0]][coor.CCol[0] - 1] == 0 && Map[coor.CRow[0]][coor.CCol[0] + 1] == 0 && Map[coor.CRow[1] + 1][coor.CCol[1]] == 0 && Map[coor.CRow[1]][coor.CCol[1] - 1] == 0 && Map[coor.CRow[2] + 1][coor.CCol[2]] == 0 && Map[coor.CRow[3] + 1][coor.CCol[3]] == 0 && coor.CRow[3] < 23) { Map[coor.CRow[2]][coor.CCol[2]] = 0; Map[coor.CRow[3]][coor.CCol[3]] = 0; Map[coor.CRow[0]][coor.CCol[0] + 1] = 1; Map[coor.CRow[1] + 1][coor.CCol[1]] = 1; ch = 10; } break; case 14: if (Map[coor.CRow[0]][coor.CCol[0] + 1] == 0 && Map[coor.CRow[1]][coor.CCol[1] - 1] == 0 && Map[coor.CRow[1]][coor.CCol[1] + 1] == 0 && Map[coor.CRow[2]][coor.CCol[2] - 1] == 0 && Map[coor.CRow[3]][coor.CCol[3] - 1] == 0) { if (coor.CCol[0] > 1 && Map[coor.CRow[1]][coor.CCol[1] - 2] == 0 && coor.CCol[3] < 9) { Map[coor.CRow[0]][coor.CCol[0]] = 0; Map[coor.CRow[2]][coor.CCol[2]] = 0; Map[coor.CRow[3]][coor.CCol[3]] = 0; Map[coor.CRow[1]][coor.CCol[1] - 1] = 1; Map[coor.CRow[1]][coor.CCol[1] + 1] = 1; Map[coor.CRow[1]][coor.CCol[1] - 2] = 1; ch = 15; } else if(coor.CCol[0] < 8 && Map[coor.CRow[1]][coor.CCol[1] + 2] == 0 && coor.CCol[0] > 0) { Map[coor.CRow[0]][coor.CCol[0]] = 0; Map[coor.CRow[2]][coor.CCol[2]] = 0; Map[coor.CRow[3]][coor.CCol[3]] = 0; Map[coor.CRow[1]][coor.CCol[1] - 1] = 1; Map[coor.CRow[1]][coor.CCol[1] + 1] = 1; Map[coor.CRow[1]][coor.CCol[1] + 2] = 1; ch = 15; } } break; case 15: if (Map[coor.CRow[0] - 1][coor.CCol[0]] == 0 && Map[coor.CRow[3] + 1][coor.CCol[3]] == 0 && Map[coor.CRow[2] + 1][coor.CCol[2]] == 0 && Map[coor.CRow[2] - 1][coor.CCol[2]] == 0) { if (coor.CRow[0] < 22 && Map[coor.CRow[2] + 2][coor.CCol[2]] == 0) { Map[coor.CRow[0]][coor.CCol[0]] = 0; Map[coor.CRow[1]][coor.CCol[1]] = 0; Map[coor.CRow[3]][coor.CCol[3]] = 0; Map[coor.CRow[2] - 1][coor.CCol[2]] = 1; Map[coor.CRow[2] + 1][coor.CCol[2]] = 1; Map[coor.CRow[2] + 2][coor.CCol[2]] = 1; ch = 14; } else if(coor.CRow[0] == 22 && Map[coor.CRow[2] - 2][coor.CCol[2]] == 0) { Map[coor.CRow[0]][coor.CCol[0]] = 0; Map[coor.CRow[1]][coor.CCol[1]] = 0; Map[coor.CRow[3]][coor.CCol[3]] = 0; Map[coor.CRow[2] - 1][coor.CCol[2]] = 1; Map[coor.CRow[2] + 1][coor.CCol[2]] = 1; Map[coor.CRow[2] - 2][coor.CCol[2]] = 1; ch = 14; } } break; } break; } if (dir != 0) { for (int j = 0; j < 4; j++) { clearrectangle(coor.CCol[j] * 30 + 170, coor.CRow[j] * 30 - 120, coor.CCol[j] * 30 + 170 + 30, coor.CRow[j] * 30 - 90); } } dir = 0; } void unmove() { for (int i = 0; i < 4; i++) { Map[coor.CRow[i]][coor.CCol[i]] = 2; } temp = 1; } void drawCoor() { for (int row = 0; row < 24; row++) { for (int col = 0; col < 10; col++) { if (Map[row][col] == 1) { setfillcolor(YELLOW); fillrectangle(col * 30 + 170, row * 30 - 120, col * 30 + 30 + 170, row * 30 - 90); coor.CRow[coor.n] = row; coor.CCol[coor.n] = col; coor.n++; } } if (coor.n == 4) break; } coor.n = 0; }
