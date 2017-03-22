/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:45 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/TVKit.framework/TVKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class NSString, NSArray, UILabel, UIView;

@interface TVMusicArtworkInfoView : UIView {

	BOOL _isTitleMultipleLines;
	NSString* _artworkTitle;
	NSString* _artworkSubtitle;
	NSArray* _artworkDescriptions;
	UILabel* _artworkTitleLabel;
	UILabel* _artworkSubtitleLabel;
	UIView* _artworkDescriptionContainer;

}

@property (nonatomic,retain) UILabel * artworkTitleLabel;                       //@synthesize artworkTitleLabel=_artworkTitleLabel - In the implementation block
@property (nonatomic,retain) UILabel * artworkSubtitleLabel;                    //@synthesize artworkSubtitleLabel=_artworkSubtitleLabel - In the implementation block
@property (nonatomic,retain) UIView * artworkDescriptionContainer;              //@synthesize artworkDescriptionContainer=_artworkDescriptionContainer - In the implementation block
@property (nonatomic,retain) NSString * artworkTitle;                           //@synthesize artworkTitle=_artworkTitle - In the implementation block
@property (nonatomic,retain) NSString * artworkSubtitle;                        //@synthesize artworkSubtitle=_artworkSubtitle - In the implementation block
@property (nonatomic,retain) NSArray * artworkDescriptions;                     //@synthesize artworkDescriptions=_artworkDescriptions - In the implementation block
@property (assign,nonatomic) BOOL isTitleMultipleLines;                         //@synthesize isTitleMultipleLines=_isTitleMultipleLines - In the implementation block
-(void)layoutSubviews;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setArtworkTitle:(NSString *)arg1 ;
-(void)setArtworkSubtitle:(NSString *)arg1 ;
-(void)setArtworkDescriptions:(NSArray *)arg1 ;
-(NSString *)artworkTitle;
-(id)_mainTextColor;
-(id)_descriptiveLabelForDescription:(id)arg1 ;
-(void)_setTextColors;
-(id)_infoTextColor;
-(void)setIsTitleMultipleLines:(BOOL)arg1 ;
-(NSString *)artworkSubtitle;
-(NSArray *)artworkDescriptions;
-(BOOL)isTitleMultipleLines;
-(UILabel *)artworkTitleLabel;
-(void)setArtworkTitleLabel:(UILabel *)arg1 ;
-(UILabel *)artworkSubtitleLabel;
-(void)setArtworkSubtitleLabel:(UILabel *)arg1 ;
-(UIView *)artworkDescriptionContainer;
-(void)setArtworkDescriptionContainer:(UIView *)arg1 ;
@end

