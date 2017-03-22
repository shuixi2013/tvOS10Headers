/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:38 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKit/UIView.h>

@class UIImage, NSString, UIImageView, UILabel, UILongPressGestureRecognizer;

@interface PLEmptyAlbumView : UIView {

	UIImage* _image;
	UIImage* _landscapeImage;
	NSString* _title;
	NSString* _message;
	NSObject* _album;
	UIImageView* _imageView;
	UILabel* _titleLabel;
	UILabel* _messageLabel;
	UILongPressGestureRecognizer* _longPressRecognizer;
	int _filter;
	BOOL _isCameraAlbum;
	BOOL _useLargeImages;
	BOOL _filterInUse;
	int _currentOrientation;
	UIEdgeInsets _edgeInsets;
	BOOL _isSharedPhotoStreamList;

}

@property (nonatomic,retain) NSObject*<PLAlbumProtocol> album;              //@synthesize album=_album - In the implementation block
@property (assign,nonatomic) int filter;                                    //@synthesize filter=_filter - In the implementation block
@property (assign,nonatomic) UIEdgeInsets edgeInsets;                       //@synthesize edgeInsets=_edgeInsets - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setImage:(id)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setTitle:(id)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(UIEdgeInsets)edgeInsets;
-(void)setFilter:(int)arg1 ;
-(BOOL)canBecomeFirstResponder;
-(void)paste:(id)arg1 ;
-(void)setMessage:(id)arg1 ;
-(void)setEdgeInsets:(UIEdgeInsets)arg1 ;
-(int)filter;
-(NSObject*<PLAlbumProtocol>)album;
-(void)setAlbum:(NSObject*<PLAlbumProtocol>)arg1 ;
-(void)_longPressGesture:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 useLargeImages:(BOOL)arg2 ;
-(id)_titleForAlbum:(NSObject*)arg1 ;
-(id)_newLabelWithText:(id)arg1 ;
-(id)_messageForAlbum:(NSObject*)arg1 ;
-(id)_newTextViewWithText:(id)arg1 ;
-(void)_sizeLabelToFitView:(id)arg1 ;
-(id)_emptyRollImageForAlbum:(NSObject*)arg1 interfaceOrientation:(long long)arg2 ;
-(void)setPortraitImage:(id)arg1 landscapeImage:(id)arg2 ;
-(void)setIsCameraAlbum:(BOOL)arg1 ;
-(void)setIsSharedPhotoStreamList:(BOOL)arg1 ;
@end

