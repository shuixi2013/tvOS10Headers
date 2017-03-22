/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:37 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MFMultiDragDestination <NSObject>
@required
-(void)dropItems:(id)arg1;
-(id)destinationViewForDrop;
-(void)dragMovedToPoint:(CGPoint)arg1 withItems:(id)arg2;
-(void)dragExitedWithItems:(id)arg1;
-(void)dragEnteredAtPoint:(CGPoint)arg1 withItems:(id)arg2;
-(void)willDropItems:(id)arg1;
-(CGRect*)frameForDroppedItem:(id)arg1;
-(id)supportedDropTypes:(id)arg1;

@end

