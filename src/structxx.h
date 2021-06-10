#pragma once



struct StTheta {

	void operator=(StTheta& pOther);
};


struct StBeta {

	StBeta& operator=(const StBeta& pOther);
};


struct StAlpha {

	const StAlpha& operator=(StAlpha& pOther);
};