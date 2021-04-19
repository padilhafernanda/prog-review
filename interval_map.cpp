#include <iostream>
#include <map>
#include <string>

template<typename K, typename V>
class interval_map {
	friend void IntervalMapTest();
	V m_valBegin;
	std::map<K,V> m_map;
public:
	// constructor associates whole range of K with val
	interval_map(V const& val): m_valBegin(val)	{}

	void assign( K const& keyBegin, K const& keyEnd, V const& val ) {
        
        if (keyBegin < keyEnd){
           // m_valBegin = keyBegin;
            for (int i=keyBegin; i<keyEnd; i++){       
            //    std::cout << i << " => " << V(val) << "; ";
            //    std::cout << "\n";
                m_map[i]=val;
            }
        } else return;
        
	}

	// look-up of the value associated with key
	V const& operator[]( K const& key ) const {
		auto it=m_map.upper_bound(key);
		if(it==m_map.begin()) {
			return m_valBegin;
		} else {
			return (--it)->second;
		}
	}
    
};

int main()
{
    interval_map<int,char> M{'A'}; 
    int kBegin = -10, kEnd = 15;
    M.assign(kBegin, kEnd, 'A');

    std::cout <<"Start"<< "\n";
    for (int i=kBegin; i<kEnd; i++){ 
    std::cout << i << " => " << M[i] << "; ";
    std::cout << "\n";
    }
    
    M.assign(-5, 0, 'B');
    std::cout <<"Mid"<< "\n";;
    for (int i=kBegin; i<kEnd; i++){ 
    std::cout << i << " => " << M[i] << "; ";
    std::cout << "\n";
    }
    
    std::cout << "\n";
    M.assign(-1, 2, 'T');
    std::cout <<"End"<< "\n";
    for (int i=kBegin; i<kEnd; i++){ 
    std::cout << i << " => " << M[i] << "; ";
    std::cout << "\n";
    }

    return 1;   
}
