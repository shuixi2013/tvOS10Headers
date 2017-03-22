/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:04:39 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIViewController.h>
#import <libobjc.A.dylib/CNActionsViewProtocol.h>
#import <libobjc.A.dylib/CNContactActionsViewControllerDelegate.h>
#import <libobjc.A.dylib/CNUIObjectViewController.h>

@protocol CNUIObjectViewControllerDelegate, CNContactInlineActionsViewControllerDelegate;
@class UIView, CNContact, NSArray, CNActionsView, NSDictionary, UIAlertController, CNUIUserActionListDataSource, NSString;

@interface CNContactInlineActionsViewController : UIViewController <CNActionsViewProtocol, CNContactActionsViewControllerDelegate, CNUIObjectViewController> {

	BOOL _displaysUnavailableActionTypes;
	BOOL _displaysTitles;
	id<CNUIObjectViewControllerDelegate> objectViewControllerDelegate;
	CNContact* _contact;
	NSArray* _supportedActionTypes;
	double _actionTypesInterspace;
	long long _viewStyle;
	id<CNContactInlineActionsViewControllerDelegate> _delegate;
	NSArray* _actionItems;
	CNActionsView* _actionsView;
	NSArray* _tokens;
	NSDictionary* _defaultActionPerType;
	UIAlertController* _alertController;
	CNUIUserActionListDataSource* _actionListDataSource;

}

@property (nonatomic,copy) NSArray * actionItems;                                                                   //@synthesize actionItems=_actionItems - In the implementation block
@property (assign,nonatomic,__weak) CNActionsView * actionsView;                                                    //@synthesize actionsView=_actionsView - In the implementation block
@property (nonatomic,copy) NSArray * tokens;                                                                        //@synthesize tokens=_tokens - In the implementation block
@property (nonatomic,copy) NSDictionary * defaultActionPerType;                                                     //@synthesize defaultActionPerType=_defaultActionPerType - In the implementation block
@property (nonatomic,retain) UIAlertController * alertController;                                                   //@synthesize alertController=_alertController - In the implementation block
@property (nonatomic,retain) CNUIUserActionListDataSource * actionListDataSource;                                   //@synthesize actionListDataSource=_actionListDataSource - In the implementation block
@property (assign,nonatomic) BOOL displaysUnavailableActionTypes;                                                   //@synthesize displaysUnavailableActionTypes=_displaysUnavailableActionTypes - In the implementation block
@property (assign,nonatomic) BOOL displaysTitles;                                                                   //@synthesize displaysTitles=_displaysTitles - In the implementation block
@property (nonatomic,retain) CNContact * contact;                                                                   //@synthesize contact=_contact - In the implementation block
@property (nonatomic,copy) NSArray * supportedActionTypes;                                                          //@synthesize supportedActionTypes=_supportedActionTypes - In the implementation block
@property (assign,nonatomic) double actionTypesInterspace;                                                          //@synthesize actionTypesInterspace=_actionTypesInterspace - In the implementation block
@property (assign,nonatomic) long long viewStyle;                                                                   //@synthesize viewStyle=_viewStyle - In the implementation block
@property (assign,nonatomic,__weak) id<CNContactInlineActionsViewControllerDelegate> delegate;                      //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIView * view; 
@property (assign,nonatomic,__weak) id<CNUIObjectViewControllerDelegate> objectViewControllerDelegate; 
+(BOOL)isEmptyModel:(id)arg1 ;
+(id)descriptorForRequiredKeys;
-(void)setDelegate:(id<CNContactInlineActionsViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<CNContactInlineActionsViewControllerDelegate>)delegate;
-(void)reset;
-(void)loadView;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(void)setAlertController:(UIAlertController *)arg1 ;
-(UIAlertController *)alertController;
-(NSArray *)tokens;
-(NSArray *)actionItems;
-(NSArray *)supportedActionTypes;
-(void)setObjectViewControllerDelegate:(id<CNUIObjectViewControllerDelegate>)arg1 ;
-(CNActionsView *)actionsView;
-(void)contactActionsViewController:(id)arg1 didSelectAction:(id)arg2 ;
-(void)performAction:(id)arg1 ;
-(id<CNUIObjectViewControllerDelegate>)objectViewControllerDelegate;
-(void)setActionsView:(CNActionsView *)arg1 ;
-(void)didSelectAction:(id)arg1 withSourceView:(id)arg2 longPress:(BOOL)arg3 ;
-(BOOL)displaysUnavailableActionTypes;
-(void)displayAllSupportedTypesDisabled;
-(void)discoverAvailableActionTypes;
-(double)actionTypesInterspace;
-(long long)viewStyle;
-(void)displayAdditionalActionItems:(id)arg1 ;
-(id)actionItemForType:(id)arg1 defaultAction:(id)arg2 ;
-(void)setActionItems:(NSArray *)arg1 ;
-(void)setDefaultActionPerType:(NSDictionary *)arg1 ;
-(NSDictionary *)defaultActionPerType;
-(void)showDisambiguationFromSourceView:(id)arg1 actionType:(id)arg2 ;
-(id)initWithActionListDataSource:(id)arg1 ;
-(void)setDisplaysUnavailableActionTypes:(BOOL)arg1 ;
-(void)setDisplaysTitles:(BOOL)arg1 ;
-(void)setActionTypesInterspace:(double)arg1 ;
-(void)setSupportedActionTypes:(NSArray *)arg1 ;
-(void)setViewStyle:(long long)arg1 ;
-(void)processModel:(id)arg1 forActionType:(id)arg2 ;
-(BOOL)displaysTitles;
-(void)setTokens:(NSArray *)arg1 ;
-(CNUIUserActionListDataSource *)actionListDataSource;
-(void)setActionListDataSource:(CNUIUserActionListDataSource *)arg1 ;
-(CNContact *)contact;
-(void)setContact:(CNContact *)arg1 ;
@end

