/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:36 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MRMarimbaHitBlobSupport
@required
-(BOOL)beginLiveUpdateForHitBlob:(id)arg1;
-(CGPoint*)convertPoint:(CGPoint)arg1 toHitBlob:(id)arg2;
-(BOOL)endLiveUpdateForHitBlob:(id)arg1;
-(void)endGesture:(id)arg1;
-(id)blobHitAtPoint:(CGPoint)arg1 fromObjectsForObjectIDs:(id)arg2 localPoint:(CGPoint*)arg3;
-(BOOL)getOnScreenVertices:(CGPoint)arg1 forHitBlob:(id)arg2;
-(void)beginGesture:(id)arg1;
-(void)doGesture:(id)arg1;
-(void)cancelGesture:(id)arg1;

@end

