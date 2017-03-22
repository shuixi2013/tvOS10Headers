/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:25 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <HomeKitDaemon/HMDCameraTLVBase.h>
#import <libobjc.A.dylib/HMDCameraTLVCreateParse.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class HMDSessionControl, HMDSelectedVideoParameters, HMDSelectedAudioParameters;

@interface HMDSelectedStreamConfigurationWrite : HMDCameraTLVBase <HMDCameraTLVCreateParse, NSSecureCoding> {

	HMDSessionControl* _sessionControl;
	HMDSelectedVideoParameters* _videoParameters;
	HMDSelectedAudioParameters* _audioParameters;

}

@property (nonatomic,copy,readonly) HMDSessionControl * sessionControl;                        //@synthesize sessionControl=_sessionControl - In the implementation block
@property (nonatomic,copy,readonly) HMDSelectedVideoParameters * videoParameters;              //@synthesize videoParameters=_videoParameters - In the implementation block
@property (nonatomic,copy,readonly) HMDSelectedAudioParameters * audioParameters;              //@synthesize audioParameters=_audioParameters - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)tlvData;
-(BOOL)_parseFromTLVData;
-(void)description:(id)arg1 indent:(id)arg2 ;
-(HMDSessionControl *)sessionControl;
-(HMDSelectedVideoParameters *)videoParameters;
-(id)initWithSessionControl:(id)arg1 videoParameters:(id)arg2 audioParameters:(id)arg3 ;
-(id)initWithSessionControl:(id)arg1 ;
-(HMDSelectedAudioParameters *)audioParameters;
@end

