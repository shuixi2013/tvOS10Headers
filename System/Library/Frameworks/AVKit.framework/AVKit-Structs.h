/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:12 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

typedef struct _NSZone* NSZoneRef;

typedef struct {
	long long value;
	int timescale;
	unsigned flags;
	long long epoch;
} SCD_Struct_AV1;

typedef struct CGSize {
	double width;
	double height;
} CGSize;

typedef struct CGImage* CGImageRef;

typedef struct os_unfair_lock_s {
	unsigned _os_unfair_lock_opaque;
} os_unfair_lock_s;

typedef struct {
	SCD_Struct_AV1 start;
	SCD_Struct_AV1 duration;
} SCD_Struct_AV5;

typedef struct CGPoint {
	double x;
	double y;
} CGPoint;

typedef struct {
	CGPoint _startPos;
	CGPoint _lastPos;
	BOOL _isTouchRecent;
	BOOL _wantReset;
	BOOL _isDragging;
	BOOL _isTouching;
	double coastingSnapTimeDelta;
	double estFinalCoastingTime;
	double estFinalSnappingTime;
	BOOL wasVisibleAtStart;
	CGPoint momentumDelta;
	double lastProximity;
	long long touchPositionAtStart;
	double cursorSpeedAtStart;
	double startTime;
	double lastTime;
	BOOL _haveReceivedTouchesMoved;
	BOOL selectOccurredDuringTracking;
} SCD_Struct_AV7;

typedef struct OpaqueCMTimebase* OpaqueCMTimebaseRef;

typedef struct CGRect {
	CGPoint origin;
	CGSize size;
} CGRect;

