// cd.h -- head file 
#ifndef CD_H_
#define CD_H_

class Cd
{
private:
	char * performers;
	char * label;
	int selections;
	double playtime;
public:
	Cd(char * s1, char * s2, int n, double x);
	Cd(const Cd & d);
	Cd();
	virtual ~Cd();
	virtual void Report() const;
	virtual Cd & operator=(const Cd & d);
};

class Classic : public Cd
{
private:
	char * mainworks;
public:
	Classic(char * s0, char * s1, char * s2, int n, double x);
	Classic(char * s0, Cd & rs);
	Classic();
	virtual ~Classic();
	virtual void Report() const;
	virtual Classic & operator=(const Classic & d);
};

#endif


