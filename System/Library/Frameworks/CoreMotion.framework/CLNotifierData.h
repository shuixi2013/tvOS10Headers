/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:02:55 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface CLNotifierData : NSObject {

	void* _data;
	/*^block*/id _destructor;

}

@property (assign,nonatomic) void* data;               //@synthesize data=_data - In the implementation block
@property (nonatomic,copy) id destructor;              //@synthesize destructor=_destructor - In the implementation block
-(void)dealloc;
-(void*)data;
-(void)setData:(void*)arg1 ;
-(id)initWithData:(void*)arg1 destructor:(/*^block*/id)arg2 ;
-(void)setDestructor:(id)arg1 ;
-(id)destructor;
@end

