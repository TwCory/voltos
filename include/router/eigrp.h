#ifndef _ROUTER_EIGRP_H_
#define _ROUTER_EIGRP_H_

struct eigrp {

};

struct eigrp_interface {
	struct eigrp *eigrp;
};

struct eigrp_neighbour {
	struct eigrp *eigrp;
};

#endif /* _ROUTER_EIGRP_H_ */
