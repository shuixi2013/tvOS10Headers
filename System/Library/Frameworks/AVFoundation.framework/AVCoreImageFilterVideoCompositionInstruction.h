/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:03:10 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVVideoCompositionInstruction.h>

@class NSArray, NSString;

@interface AVCoreImageFilterVideoCompositionInstruction : NSObject <AVVideoCompositionInstruction> {

	SCD_Struct_AV3 _timeRange;
	NSArray* _requiredSourceTrackIDs;
	/*^block*/id _handler;
	CGAffineTransform _sourceTrackPreferredTransform;

}

@property (nonatomic,readonly) id handler;                                                 //@synthesize handler=_handler - In the implementation block
@property (assign,nonatomic) CGAffineTransform sourceTrackPreferredTransform;              //@synthesize sourceTrackPreferredTransform=_sourceTrackPreferredTransform - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) SCD_Struct_AV3 timeRange;                                   //@synthesize timeRange=_timeRange - In the implementation block
@property (nonatomic,readonly) BOOL enablePostProcessing; 
@property (nonatomic,readonly) BOOL containsTweening; 
@property (nonatomic,readonly) NSArray * requiredSourceTrackIDs;                           //@synthesize requiredSourceTrackIDs=_requiredSourceTrackIDs - In the implementation block
@property (nonatomic,readonly) int passthroughTrackID; 
-(void)dealloc;
-(id)init;
-(id)handler;
-(BOOL)enablePostProcessing;
-(BOOL)containsTweening;
-(int)passthroughTrackID;
-(id)initWithTimeRange:(SCD_Struct_AV3)arg1 sourceTrackIDs:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)setSourceTrackPreferredTransform:(CGAffineTransform)arg1 ;
-(CGAffineTransform)sourceTrackPreferredTransform;
-(SCD_Struct_AV3)timeRange;
-(NSArray *)requiredSourceTrackIDs;
@end

