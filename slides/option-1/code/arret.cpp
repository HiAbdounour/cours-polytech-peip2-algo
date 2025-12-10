//On suppose que l'on a une fonction
bool arret (string programme, string argument){...}

void contradiction (string programme){
  if (!arret(programme, programme)){
    return;
  }
  else
    while(true){}
}
