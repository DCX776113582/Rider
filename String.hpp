class String{
  String& operator+(String& str1)
  {
    len = len + str1.len;
    char* s1 = new char[len+1];
    strcpy(s1,rep);
    strcat(s1,str1.rep);
    String s2(s1);
    delete [] s1;
    s1 = NULL;
    return s2;
  }
  String& operator+=(String& str1)
  {
    len = len + str1.len;
    if(rep!=NULL){
      char* s1 = new char[len+1-str1.len];
      strcpy(s1,rep);
      delete [] rep;
      rep = new char[len+1];
      strcpy(rep,s1);
      strcat(rep,str1.rep);
      delete [] s1;
      s1 = NULL;
    }else{
      rep = new char[len+1];
      strcat(rep,str1.rep);
    }
    return *this;
  }
};
//简单修改