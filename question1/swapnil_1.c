string f(string a){
	for(int i=0; i < a.size();i++){
		a[i] = (a[i]-48==1)?(char*)48:(char*)49;
	}
}
