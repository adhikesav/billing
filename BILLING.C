#include<stdio.h>
#include<conio.h>
void main(){
float qvd=0,qvt=0,qor=0,gst,total,pricec=0,priceh=0,pricela=0,pricea=0,priceor=0,pricel=0,pricet=0,priceo=0,priced=0,qa=0,ql=0,qla=0,qco=0,qs=0,qf=0,qvo=0,qd =0,qt=0,qo=0,totalv=0,qfl=0,qfa=0,qfo=0,totalf=0,qsl=0,qsh=0,qsc=0,totals=0,grandtotal;
int l,s,a,v,c,cs,f,cf,ml;
clrscr();
printf("\t\t HELLO GUYS WELCOME TO adhikeav youtube CHANNEL\n");
xd:
printf("\n\n 1.vegetable");
printf("\n 2.fruits");
printf("\n 3.snacks");
printf("\nENTER YOUR CHOICE : ");
scanf("%d",&a);
switch(a){
case 1 :
hello:
printf("\n1.drumstick RS.10 per piece : ");
printf("\n2.tomato RS.25 per kg : ");
printf("\n3. onion RS.35 per kg : ");
printf("ENTER YOU CHOICE : ");
label:
scanf("%d",&v);
if(v==1){
	printf("ENTER THE QUANTITY OF drumstick : ");
	scanf("%f",&qvd);
	priced =priced+(qvd*10);
	totalv = totalv+(qvd*10);
	qd = qvd + qd;
	printf("DO YOU WANT OTHER VEGETABLES :\n1 for yes \n0 for no  ");
	scanf("%d",&c);
	if(c==1){
		goto hello;
	}
}
else if(v==2){
	printf("ENTER THE QUANTITY OF tomato : ");
	scanf("%f",&qvt);
	pricet=pricet+(qvt*25);
	totalv = totalv+(qvt*25);
	qt = qt + qvt;
	printf("DO YOU WANT OTHER VEGETABLES :\n1 for yes \n0 for no  ");
	scanf("%d",&c);
	if(c==1){
		goto hello;
	}
}
else if(v==3){
	printf("ENTER THE QUANTITY of onion : ");
	scanf("%f",&qvo);
	priceo = priceo+(qvo*35);
	totalv = totalv+(qvo*35);
	qo = qo + qvo;
	printf("DO YOU WANT OTHER VEGETABLES :\n1 for yes \n0 for no  ");
	scanf("%d",&c);
	if(c==1){
		goto hello;
	}
}
else{
	printf("\nENTER A VALID CHOICE : ");
	goto label;
}
printf("Do you want fruits or snacks : \n 1 for yes \n0 for no ");
scanf("%d",&l);
if(l==1){
goto xd;
}
break;
case 2 :
hello2:
printf("\n1.lime RS.10 per piece : ");
printf("\n2.orange RS.25 per kg : ");
printf("\n3.apple RS.35 per kg : ");
printf("\nENTER YOU CHOICE : ");
label2:
scanf("%d",&f);
if(f==1){
	printf("ENTER THE QUANTITY OF lime : ");
	scanf("%f",&qfl);
	pricel = pricel+(qfl*10);
	totalf = totalf+(qfl*10);
	ql = ql+qfl;
	printf("DO YOU WANT OTHER fruit:\n1 for yes \n0 for no  ");
	scanf("%d",&cf);
	if(cf==1){
		goto hello2;
	}
}
else if(f==2){
	printf("\nENTER THE QUANTITY OF orange: ");
	scanf("%f",&qfo);
	priceor=priceor+(qfo*25);
	totalf = totalf+(qfo*25);
	qor = qor+qfo;
	printf("\nDO YOU WANT OTHER fruit :\n1 for yes \n0 for no  ");
	scanf("%d",&cf);
	if(cf==1){
		goto hello2;
	}
}
else if(f==3){
	printf("\nENTER THE QUANTITY of apple: ");
	scanf("%f",&qfa);
	pricea=pricea+(qfa*35);
	totalf = totalf+(qfa*35);
	qa = qa+qfa;
	printf("\nDO YOU WANT OTHER fruit :\n1 for yes \n0 for no  ");
	scanf("%d",&cf);
	if(cf==1){
		goto hello2;
	}
}
else{
	printf("\nENTER A VALID CHOICE : ");
	goto label2;
}
printf("Do you want vegetable or snacks : \n 1 for yes \n0 for no ");
scanf("%d",&l);
if(l==1){
goto xd;
}
break;
case 3:
hello3:
printf("\n1.lays RS.10 per piece : ");
printf("\n2.hide and seek RS.25 per kg : ");
printf("\n3.coke RS.35 per kg : ");
printf("\nENTER YOU CHOICE : ");
label3:
scanf("%d",&s);
if(s==1){
	printf("ENTER THE QUANTITY OF lays: ");
	scanf("%f",&qsl);
	pricela =pricela+(qsl*10);
	totalf = totals+(qsl*10);
	qla = qla +qsl;
	printf("DO YOU WANT OTHER SNACKS:\n1 for yes \n0 for no  ");
	scanf("%f",&cs);
	if(cs==1){
		goto hello3;
	}
}
else if(s==2){
	printf("\nENTER THE QUANTITY OF hide and seek: ");
	scanf("%f",&qsh);
	priceh =priceh+(qsh*25);
	totalf = totalf+(qsh*25);
	qs = qs+qsh;
	printf("\nDO YOU WANT OTHER snacks :\n1 for yes \n0 for no  ");
	scanf("%f",&cs);
	if(cs==1){
		goto hello2;
	}
}
else if(s==3){
	printf("\nENTER THE QUANTITY of coke: ");
	scanf("%f",&qsc);
	pricec = pricec+(qsc*35);
	totalf = totalf+(qsc*35);
	qco = qco+qsc;
	printf("\nDO YOU WANT OTHER snacks :\n1 for yes \n0 for no  ");
	scanf("%d",&cs);
	if(cs==1){
		goto hello3;
	}
}
else{
	printf("\nENTER A VALID CHOICE : ");
	goto label3;
}
printf("Do you want fruits or vegetable : \n 1 for yes \n0 for no ");
scanf("%d",&l);
if(l==1){
goto xd;
}
break;
default : printf("enter the valid");goto xd;
}
grandtotal = totals+totalv+totalf;
gst = grandtotal*0.12;
total = grandtotal+gst;
printf("Do you want sepparate bill for each item : \n1 for yes :  \n2 for no : ");
scanf("%d",&ml);
if(ml==1){
if(qd>0){
printf("\n___________________________________________________________");
printf("\n\t\t\tBILL");
printf("\n___________________________________________________________");
printf("\nITEM\t\tQUANTITY\tPRICE");
printf("\n___________________________________________________________");
printf("\ndrumstick\t%.2f\t\t%.2f",qd,priced);
printf("\n-----------------------------------------------------------");
printf("\nTotal\t\t\t\t%.2f",priced);
printf("\nGST\t\t\t\t%.2f",priced*0.10);
printf("\nGrand Total\t\t\t%.2f",priced+(priced*0.10));
printf("\n-----------------------------------------------------------");}
if(qt>0){
printf("\n___________________________________________________________");
printf("\n\t\t\tBILL");
printf("\n___________________________________________________________");
printf("\nITEM\t\tQUANTITY\tPRICE");
printf("\n___________________________________________________________");
printf("\ntomato\t\t%.2f\t\t%.2f",qt,pricet);
printf("\n-----------------------------------------------------------");
printf("\nTotal\t\t\t\t%.2f",pricet);
printf("\nGST\t\t\t\t%.2f",pricet*0.10);
printf("\nGrand Total\t\t\t%.2f",pricet+(pricet*0.10));
printf("\n-----------------------------------------------------------");}
if(qo>0){
printf("\n___________________________________________________________");
printf("\n\t\t\tBILL");
printf("\n___________________________________________________________");
printf("\nITEM\t\tQUANTITY\tPRICE");
printf("\n___________________________________________________________");
printf("\nonion\t\t%.2f\t\t%.2f",qo,priceo);
printf("\n-----------------------------------------------------------");
printf("\nTotal\t\t\t\t%.2f",priceo);
printf("\nGST\t\t\t\t%.2f",priceo*0.10);
printf("\nGrand Total\t\t\t%.2f",priceo+(priceo*0.10));
printf("\n-----------------------------------------------------------");}
if(ql>0){
printf("\n___________________________________________________________");
printf("\n\t\t\tBILL");
printf("\n___________________________________________________________");
printf("\nITEM\t\tQUANTITY\tPRICE");
printf("\n___________________________________________________________");
printf("\nlime\t\t%.2f\t\t%.2f",ql,pricel);
printf("\n-----------------------------------------------------------");
printf("\nTotal\t\t\t\t%.2f",pricel);
printf("\nGST\t\t\t\t%.2f",pricel*0.10);
printf("\nGrand Total\t\t\t%.2f",pricel+(pricel*0.10));
printf("\n-----------------------------------------------------------");}
if(qor>0){
printf("\n___________________________________________________________");
printf("\n\t\t\tBILL");
printf("\n___________________________________________________________");
printf("\nITEM\t\tQUANTITY\tPRICE");
printf("\n___________________________________________________________");
printf("\norange\t\t%.2f\t\t%.2f",qor,priceor);
printf("\n-----------------------------------------------------------");
printf("\nTotal\t\t\t\t%.2f",priceor);
printf("\nGST\t\t\t\t%.2f",priceor*0.10);
printf("\nGrand Total\t\t\t%.2f",priceor+(priceor*0.10));
printf("\n-----------------------------------------------------------");}
if(qa>0){
printf("\n___________________________________________________________");
printf("\n\t\t\tBILL");
printf("\n___________________________________________________________");
printf("\nITEM\t\tQUANTITY\tPRICE");
printf("\n___________________________________________________________");
printf("\napple\t\t%.2f\t\t%.2f",qa,pricea);
printf("\n-----------------------------------------------------------");
printf("\nTotal\t\t\t\t%.2f",pricea);
printf("\nGST\t\t\t\t%.2f",pricea*0.10);
printf("\nGrand Total\t\t\t%.2f",pricea+(pricea*0.10));
printf("\n-----------------------------------------------------------");}
if(qla>0){
printf("\n___________________________________________________________");
printf("\n\t\t\tBILL");
printf("\n___________________________________________________________");
printf("\nITEM\t\tQUANTITY\tPRICE");
printf("\n___________________________________________________________");
printf("\nlays\t\t%.2f\t\t%.2f",qla,pricela);
printf("\n-----------------------------------------------------------");
printf("\nTotal\t\t\t\t%.2f",pricela);
printf("\nGST\t\t\t\t%.2f",pricela*0.10);
printf("\nGrand Total\t\t\t%.2f",pricela+(pricela*0.10));
printf("\n-----------------------------------------------------------");}
if(qs>0){
printf("\n___________________________________________________________");
printf("\n\t\t\tBILL");
printf("\n___________________________________________________________");
printf("\nITEM\t\tQUANTITY\tPRICE");
printf("\n___________________________________________________________");
printf("\nhide and seek\t%.2f\t\t%.2f",qs,priceh);
printf("\n-----------------------------------------------------------");
printf("\nTotal\t\t\t\t%.2f",priceh);
printf("\nGST\t\t\t\t%.2f",priceh*0.10);
printf("\nGrand Total\t\t\t%.2f",priceh+(priceh*0.10));
printf("\n-----------------------------------------------------------");}
if(qco>0){
printf("\n___________________________________________________________");
printf("\n\t\t\tBILL");
printf("\n___________________________________________________________");
printf("\nITEM\t\tQUANTITY\tPRICE");
printf("\n___________________________________________________________");
printf("\ncoke\t\t%.2f\t\t%.2f",qco,pricec);
printf("\n-----------------------------------------------------------");
printf("\nTotal\t\t\t\t%.2f",pricec);
printf("\nGST\t\t\t\t%.2f",pricec*0.10);
printf("\nGrand Total\t\t\t%.2f",pricec+(pricec*0.10));
printf("\n-----------------------------------------------------------");}
}
else{
printf("\n___________________________________________________________");
printf("\n\t\t\tBILL");
printf("\n___________________________________________________________");
printf("\nITEM\t\tQUANTITY\tPRICE");
printf("\n___________________________________________________________");
if(qd>0)
printf("\ndrumstick\t%.2f\t\t%.2f",qd,priced);
if(qt>0)
printf("\ntomato\t\t%.2f\t\t%.2f",qt,pricet);
if(qo>0)
printf("\nonion\t\t%.2f\t\t%.2f",qo,priceo);
if(ql>0)
printf("\nlime\t\t%.2f\t\t%.2f",ql,pricel);
if(qor>0)
printf("\norange\t\t%.2f\t\t%.2f",qor,priceor);
if(qa>0)
printf("\napple\t\t%.2f\t\t%.2f",qa,pricea);
if(qla>0)
printf("\nlays\t\t%.2f\t\t%.2f",qla,pricela);
if(qs>0)
printf("\nhide and seek\t%.2f\t\t%.2f",qs,priceh);
if(qco>0)
printf("\ncoke\t\t%.2f\t\t%.2f",qco,pricec);
printf("\n-----------------------------------------------------------");
printf("\nTotal\t\t\t\t%.2f",grandtotal);
printf("\nGST\t\t\t\t%.2f",gst);
printf("\nGrand Total\t\t\t%.2f",total);
printf("\n-----------------------------------------------------------");
}
getch();

}