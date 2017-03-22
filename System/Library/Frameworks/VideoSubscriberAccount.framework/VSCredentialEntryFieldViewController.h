/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:09:11 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/TVTextEntryControllerDelegate.h>

@protocol VSCredentialEntryFieldViewControllerDelegate;
@class VSCredentialEntryField, UIImage, NSString, VSTextEntryHeaderView, TVImageView, UIButton, UILabel, TVTextEntryController;

@interface VSCredentialEntryFieldViewController : UIViewController <TVTextEntryControllerDelegate> {

	id<VSCredentialEntryFieldViewControllerDelegate> _delegate;
	VSCredentialEntryField* _credentialEntryField;
	UIImage* _logo;
	NSString* _headerTitle;
	NSString* _headerMessageText;
	NSString* _submitButtonText;
	NSString* _footerMessageText;
	VSTextEntryHeaderView* _headerView;
	TVImageView* _logoImageView;
	UIButton* _footerButton;
	UILabel* _footerLabel;
	TVTextEntryController* _textEntryController;
	id _textFieldTextDidChangeObserver;

}

@property (nonatomic,retain) VSTextEntryHeaderView * headerView;                                            //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) TVImageView * logoImageView;                                                   //@synthesize logoImageView=_logoImageView - In the implementation block
@property (nonatomic,retain) UIButton * footerButton;                                                       //@synthesize footerButton=_footerButton - In the implementation block
@property (nonatomic,retain) UILabel * footerLabel;                                                         //@synthesize footerLabel=_footerLabel - In the implementation block
@property (nonatomic,retain) TVTextEntryController * textEntryController;                                   //@synthesize textEntryController=_textEntryController - In the implementation block
@property (assign,nonatomic,__weak) id textFieldTextDidChangeObserver;                                      //@synthesize textFieldTextDidChangeObserver=_textFieldTextDidChangeObserver - In the implementation block
@property (assign,nonatomic,__weak) id<VSCredentialEntryFieldViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) VSCredentialEntryField * credentialEntryField;                                 //@synthesize credentialEntryField=_credentialEntryField - In the implementation block
@property (nonatomic,retain) UIImage * logo;                                                                //@synthesize logo=_logo - In the implementation block
@property (nonatomic,copy) NSString * headerTitle;                                                          //@synthesize headerTitle=_headerTitle - In the implementation block
@property (nonatomic,copy) NSString * headerMessageText;                                                    //@synthesize headerMessageText=_headerMessageText - In the implementation block
@property (nonatomic,copy) NSString * submitButtonText;                                                     //@synthesize submitButtonText=_submitButtonText - In the implementation block
@property (nonatomic,copy) NSString * footerMessageText;                                                    //@synthesize footerMessageText=_footerMessageText - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_textColor;
+(id)_footnoteTextColor;
-(void)setDelegate:(id<VSCredentialEntryFieldViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<VSCredentialEntryFieldViewControllerDelegate>)delegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(VSTextEntryHeaderView *)headerView;
-(void)setHeaderView:(VSTextEntryHeaderView *)arg1 ;
-(NSString *)headerTitle;
-(void)setHeaderTitle:(NSString *)arg1 ;
-(UIImage *)logo;
-(void)setLogo:(UIImage *)arg1 ;
-(void)textEntryControllerDidFinish:(id)arg1 ;
-(TVTextEntryController *)textEntryController;
-(id)_titleStringAttributes;
-(id)_messageStringAttributes;
-(void)_configureHeaderView;
-(void)setCredentialEntryField:(VSCredentialEntryField *)arg1 ;
-(void)setHeaderMessageText:(NSString *)arg1 ;
-(void)setSubmitButtonText:(NSString *)arg1 ;
-(void)setFooterMessageText:(NSString *)arg1 ;
-(VSCredentialEntryField *)credentialEntryField;
-(UIButton *)footerButton;
-(void)_configureTextField;
-(void)_updateButton;
-(void)setLogoImageView:(TVImageView *)arg1 ;
-(void)_configureFooterView;
-(void)setTextEntryController:(TVTextEntryController *)arg1 ;
-(void)_donePressed:(id)arg1 ;
-(void)setFooterButton:(UIButton *)arg1 ;
-(void)setFooterLabel:(UILabel *)arg1 ;
-(TVImageView *)logoImageView;
-(NSString *)headerMessageText;
-(NSString *)submitButtonText;
-(UILabel *)footerLabel;
-(NSString *)footerMessageText;
-(id)textFieldTextDidChangeObserver;
-(void)setTextFieldTextDidChangeObserver:(id)arg1 ;
@end

