/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:53 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <ScreenReaderCore/ScreenReaderCore-Structs.h>
@class NSString;

@interface SCRCPhotoEvaluatorPersonFeature : NSObject {

	CGRect _faceRect;
	CGRect _leftEyeRect;
	CGRect _mouthRect;
	CGRect _rightEyeRect;
	int _faceSize;
	int _faceLocation;
	NSString* _shirtColor;

}

@property (nonatomic,readonly) CGRect faceRect;                    //@synthesize faceRect=_faceRect - In the implementation block
@property (nonatomic,readonly) CGRect leftEyeRect;                 //@synthesize leftEyeRect=_leftEyeRect - In the implementation block
@property (nonatomic,readonly) CGRect mouthRect;                   //@synthesize mouthRect=_mouthRect - In the implementation block
@property (nonatomic,readonly) CGRect rightEyeRect;                //@synthesize rightEyeRect=_rightEyeRect - In the implementation block
@property (nonatomic,readonly) int faceSize;                       //@synthesize faceSize=_faceSize - In the implementation block
@property (nonatomic,readonly) int faceLocation;                   //@synthesize faceLocation=_faceLocation - In the implementation block
@property (nonatomic,readonly) NSString * shirtColor;              //@synthesize shirtColor=_shirtColor - In the implementation block
-(CGRect)leftEyeRect;
-(CGRect)rightEyeRect;
-(id)initWithCIFaceFeature:(id)arg1 ofSize:(int)arg2 andLocation:(int)arg3 andShirtColor:(id)arg4 ;
-(int)faceSize;
-(CGRect)mouthRect;
-(NSString *)shirtColor;
-(CGRect)faceRect;
-(int)faceLocation;
@end

