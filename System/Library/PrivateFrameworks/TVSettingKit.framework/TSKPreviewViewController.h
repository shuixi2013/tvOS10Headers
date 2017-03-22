/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:49 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/TVSettingKit.framework/TVSettingKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>

@class UIView, NSArray, UILabel, UIProgressView, NSString, NSAttributedString;

@interface TSKPreviewViewController : UIViewController {

	UIView* _contentContainer;
	NSArray* _contentConstraints;
	BOOL _shouldShowProgress;
	float _progress;
	UIView* _contentView;
	UILabel* _descriptionLabel;
	UILabel* _progressLabel;
	UIProgressView* _progressView;

}

@property (nonatomic,readonly) UILabel * descriptionLabel;                              //@synthesize descriptionLabel=_descriptionLabel - In the implementation block
@property (nonatomic,readonly) UILabel * progressLabel;                                 //@synthesize progressLabel=_progressLabel - In the implementation block
@property (nonatomic,readonly) UIProgressView * progressView;                           //@synthesize progressView=_progressView - In the implementation block
@property (nonatomic,retain) UIView * contentView;                                      //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,copy) NSString * descriptionText; 
@property (nonatomic,copy) NSAttributedString * attributedDescriptionText; 
@property (assign,nonatomic) BOOL shouldShowProgress;                                   //@synthesize shouldShowProgress=_shouldShowProgress - In the implementation block
@property (assign,nonatomic) float progress;                                            //@synthesize progress=_progress - In the implementation block
-(void)traitCollectionDidChange:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)setProgress:(float)arg1 ;
-(void)viewDidLoad;
-(void)setProgress:(float)arg1 animated:(BOOL)arg2 ;
-(float)progress;
-(NSString *)descriptionText;
-(void)setDescriptionText:(NSString *)arg1 ;
-(void)setAttributedDescriptionText:(NSAttributedString *)arg1 ;
-(void)setContentView:(id)arg1 animated:(BOOL)arg2 ;
-(NSAttributedString *)attributedDescriptionText;
-(void)setShouldShowProgress:(BOOL)arg1 ;
-(BOOL)shouldShowProgress;
-(UIProgressView *)progressView;
-(UILabel *)progressLabel;
-(UILabel *)descriptionLabel;
@end

