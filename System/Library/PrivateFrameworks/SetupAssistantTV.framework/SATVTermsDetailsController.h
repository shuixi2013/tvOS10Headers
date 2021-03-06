/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:41 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantTV.framework/SetupAssistantTV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SetupAssistantTV/SetupAssistantTV-Structs.h>
#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/TVTableViewDelegate.h>
#import <UIKit/UITableViewDataSource.h>

@class UITableView, NSString, SATVHeaderView, SATVLegalPresentation;

@interface SATVTermsDetailsController : UIViewController <TVTableViewDelegate, UITableViewDataSource> {

	UITableView* _tableView;
	long long _numberOfRows;
	NSString* _tvOSTerms;
	NSString* _warrantyTerms;
	NSString* _privacyTerms;
	NSString* _iCloudTerms;
	NSString* _gameCenterTerms;
	SATVHeaderView* _bannerView;
	SATVLegalPresentation* _legalPresentation;

}

@property (nonatomic,retain) SATVHeaderView * bannerView;                            //@synthesize bannerView=_bannerView - In the implementation block
@property (nonatomic,retain) UITableView * tableView;                                //@synthesize tableView=_tableView - In the implementation block
@property (nonatomic,retain) SATVLegalPresentation * legalPresentation;              //@synthesize legalPresentation=_legalPresentation - In the implementation block
@property (nonatomic,readonly) CGSize sizeThatFits; 
@property (assign,nonatomic) long long numberOfRows;                                 //@synthesize numberOfRows=_numberOfRows - In the implementation block
@property (nonatomic,retain) NSString * tvOSTerms;                                   //@synthesize tvOSTerms=_tvOSTerms - In the implementation block
@property (nonatomic,retain) NSString * warrantyTerms;                               //@synthesize warrantyTerms=_warrantyTerms - In the implementation block
@property (nonatomic,retain) NSString * privacyTerms;                                //@synthesize privacyTerms=_privacyTerms - In the implementation block
@property (nonatomic,retain) NSString * iCloudTerms;                                 //@synthesize iCloudTerms=_iCloudTerms - In the implementation block
@property (nonatomic,retain) NSString * gameCenterTerms;                             //@synthesize gameCenterTerms=_gameCenterTerms - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(long long)numberOfSectionsInTableView:(id)arg1 ;
-(void)loadView;
-(id)preferredFocusEnvironments;
-(void)viewDidLayoutSubviews;
-(long long)numberOfRows;
-(void)setTableView:(UITableView *)arg1 ;
-(void)tableView:(id)arg1 didFocusRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didUnfocusRowAtIndexPath:(id)arg2 ;
-(UITableView *)tableView;
-(void)setNumberOfRows:(long long)arg1 ;
-(void)setBannerView:(SATVHeaderView *)arg1 ;
-(SATVHeaderView *)bannerView;
-(CGSize)sizeThatFits;
-(void)setTvOSTerms:(NSString *)arg1 ;
-(void)setWarrantyTerms:(NSString *)arg1 ;
-(void)setPrivacyTerms:(NSString *)arg1 ;
-(void)setICloudTerms:(NSString *)arg1 ;
-(void)setGameCenterTerms:(NSString *)arg1 ;
-(NSString *)tvOSTerms;
-(NSString *)warrantyTerms;
-(NSString *)privacyTerms;
-(NSString *)iCloudTerms;
-(NSString *)gameCenterTerms;
-(SATVLegalPresentation *)legalPresentation;
-(void)setLegalPresentation:(SATVLegalPresentation *)arg1 ;
@end

