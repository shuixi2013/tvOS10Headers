/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:38 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol PLPhotoTileViewControllerDelegate <NSObject>
@optional
-(BOOL)photoTileViewControllerAllowsEditing:(id)arg1;
-(BOOL)isPhotoTileParentPageControllerAnimating:(id)arg1;
-(BOOL)photoTileViewControllerCanShowCenterOverlay:(id)arg1;
-(id)photoTileViewControllerCustomCenterOverlay:(id)arg1;
-(id)photoTileViewControllerTopLayoutGuide:(id)arg1;

@required
-(void)photoTileViewController:(id)arg1 willAppear:(BOOL)arg2;
-(void)photoTileViewController:(id)arg1 didAppear:(BOOL)arg2;
-(void)photoTileViewController:(id)arg1 didDisappear:(BOOL)arg2;
-(void)photoTileViewControllerRequestsFullScreenImage:(id)arg1;
-(void)photoTileViewControllerRequestsFullSizeImage:(id)arg1;
-(void)photoTileViewControllerCancelImageRequests:(id)arg1;
-(void)photoTileViewControllerSingleTap:(id)arg1;
-(void)photoTileViewControllerDoubleTap:(id)arg1;
-(void)photoTileViewControllerWillBeginGesture:(id)arg1;
-(void)photoTileViewControllerDidEndGesture:(id)arg1;

@end

