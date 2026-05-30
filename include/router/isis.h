#ifndef _ROUTER_ISIS_H_
#define _ROUTER_ISIS_H_

struct isis {

};

struct isis_adjacency {
	struct isis *isis;
};

struct isis_area {
	struct isis *isis;
};

struct isis_circuit {
	struct isis *isis;
};

struct isis_interface {
	struct isis *isis;
};

#endif /* _ROUTER_ISIS_H_ */
