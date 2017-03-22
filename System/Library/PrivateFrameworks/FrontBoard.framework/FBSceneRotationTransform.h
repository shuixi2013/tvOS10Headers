/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:12 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <FrontBoard/FBSceneTransform.h>

@interface FBSceneRotationTransform : FBSceneTransform {

	long long _degrees;
	double _radians;

}

@property (assign,nonatomic) long long degrees;              //@synthesize degrees=_degrees - In the implementation block
@property (assign,nonatomic) double radians;                 //@synthesize radians=_radians - In the implementation block
-(double)radians;
-(long long)degrees;
-(id)description;
-(id)initWithRadians:(double)arg1 ;
-(id)initWithDegrees:(long long)arg1 ;
-(void)setRadians:(double)arg1 ;
-(void)setDegrees:(long long)arg1 ;
-(void)_updateTransform;
@end

