#pragma once
//ʵ�ֶ���ʶ���ͼƬ����
#include"common.h"
#include <direct.h> 
#include<windows.h>
class Cluster
{
public:
	Cluster();
	typedef struct {
		string cluster_name;
		int number;
	}clust;
	void cluster(string outpath);
	vector<Cluster::clust> getClusterMessage();
	~Cluster();
private:
	typedef struct{
		string name;
		string label;
	}PIC;

	vector<PIC> images_list;
	vector<clust> image_cluster;
	//�ַ����ָ�
	vector<string> split(string str,string pattern);
	//��ȡͼƬ�ļ�·�� �� ���
	void readImagePathAndClassNameFile(string filepath);
	void sort();
};

