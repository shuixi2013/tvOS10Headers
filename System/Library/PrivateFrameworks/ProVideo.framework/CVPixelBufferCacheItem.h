/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:49 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface CVPixelBufferCacheItem : NSObject {

	NSArray* _buffers;
	NSArray* _DODs;

}

@property (nonatomic,retain) NSArray * buffers;              //@synthesize buffers=_buffers - In the implementation block
@property (nonatomic,retain) NSArray * DODs;                 //@synthesize DODs=_DODs - In the implementation block
-(NSArray *)buffers;
-(void)setBuffers:(NSArray *)arg1 ;
-(id)initWithCVPixelBuffers:(id)arg1 DODs:(id)arg2 ;
-(NSArray *)DODs;
-(void)setDODs:(NSArray *)arg1 ;
@end

