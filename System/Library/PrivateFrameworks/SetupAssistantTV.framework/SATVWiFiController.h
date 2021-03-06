/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:08:40 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantTV.framework/SetupAssistantTV
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SetupAssistantTV/SATVTableViewController.h>
#import <libobjc.A.dylib/SATVTextEntryViewControllerDelegate.h>
#import <libobjc.A.dylib/TVSWiFiNetworkConnectionOperationDelegate.h>

@class TVWiFiNetworkDataSource, TVSWiFiNetwork, NSIndexPath, SATVTextEntryViewController, UILabel, NSString;

@interface SATVWiFiController : SATVTableViewController <SATVTextEntryViewControllerDelegate, TVSWiFiNetworkConnectionOperationDelegate> {

	TVWiFiNetworkDataSource* _dataSource;
	TVSWiFiNetwork* _lastSelectedNetwork;
	NSIndexPath* _lastSelectedNetworkIndexPath;
	SATVTextEntryViewController* _networkNameController;
	SATVTextEntryViewController* _passwordController;
	UILabel* _wifiAddressLabel;
	/*^block*/id _passwordEntryBlock;

}

@property (nonatomic,retain) TVWiFiNetworkDataSource * dataSource;                                    //@synthesize dataSource=_dataSource - In the implementation block
@property (nonatomic,retain) TVSWiFiNetwork * lastSelectedNetwork;                                    //@synthesize lastSelectedNetwork=_lastSelectedNetwork - In the implementation block
@property (nonatomic,retain) NSIndexPath * lastSelectedNetworkIndexPath;                              //@synthesize lastSelectedNetworkIndexPath=_lastSelectedNetworkIndexPath - In the implementation block
@property (assign,nonatomic,__weak) SATVTextEntryViewController * networkNameController;              //@synthesize networkNameController=_networkNameController - In the implementation block
@property (assign,nonatomic,__weak) SATVTextEntryViewController * passwordController;                 //@synthesize passwordController=_passwordController - In the implementation block
@property (assign,nonatomic,__weak) UILabel * wifiAddressLabel;                                       //@synthesize wifiAddressLabel=_wifiAddressLabel - In the implementation block
@property (nonatomic,copy) id passwordEntryBlock;                                                     //@synthesize passwordEntryBlock=_passwordEntryBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDataSource:(TVWiFiNetworkDataSource *)arg1 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(id)indexPathForPreferredFocusedViewInTableView:(id)arg1 ;
-(TVWiFiNetworkDataSource *)dataSource;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)operation:(id)arg1 stateDidChange:(unsigned long long)arg2 ;
-(void)operation:(id)arg1 didConnectToNetwork:(id)arg2 ;
-(void)operation:(id)arg1 didFailToFindNetworkWithName:(id)arg2 error:(id)arg3 ;
-(void)operation:(id)arg1 didFailToConnectToNetwork:(id)arg2 error:(id)arg3 ;
-(void)operation:(id)arg1 didRequestPasswordForNetwork:(id)arg2 completion:(/*^block*/id)arg3 ;
-(UILabel *)wifiAddressLabel;
-(SATVTextEntryViewController *)passwordController;
-(void)_pushActivityIndicatorViewController;
-(id)passwordEntryBlock;
-(SATVTextEntryViewController *)networkNameController;
-(void)setPasswordEntryBlock:(id)arg1 ;
-(void)_showErrorMessageWithError:(id)arg1 ;
-(void)_showPasswordInputControllerForNetwork:(id)arg1 ;
-(void)_showNetworkNameInputController;
-(void)setNetworkNameController:(SATVTextEntryViewController *)arg1 ;
-(void)setPasswordController:(SATVTextEntryViewController *)arg1 ;
-(void)textEntryViewController:(id)arg1 didEnterText:(id)arg2 ;
-(void)textEntryViewController:(id)arg1 textDidChange:(id)arg2 ;
-(void)textEntryViewControllerDidCancel:(id)arg1 ;
-(TVSWiFiNetwork *)lastSelectedNetwork;
-(void)setLastSelectedNetwork:(TVSWiFiNetwork *)arg1 ;
-(NSIndexPath *)lastSelectedNetworkIndexPath;
-(void)setLastSelectedNetworkIndexPath:(NSIndexPath *)arg1 ;
-(void)setWifiAddressLabel:(UILabel *)arg1 ;
@end

