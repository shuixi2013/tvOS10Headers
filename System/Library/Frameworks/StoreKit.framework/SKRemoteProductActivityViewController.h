/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:06:49 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/_UIRemoteViewController.h>
#import <libobjc.A.dylib/SKUIClientProductActivityViewController.h>

@class SKStoreProductActivityViewController, NSString;

@interface SKRemoteProductActivityViewController : _UIRemoteViewController <SKUIClientProductActivityViewController> {

	SKStoreProductActivityViewController* _productActivityViewontroller;
	SKStoreProductActivityViewController* _productActivityViewController;

}

@property (assign,nonatomic) SKStoreProductActivityViewController * productActivityViewController;              //@synthesize productActivityViewController=_productActivityViewController - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)serviceViewControllerInterface;
+(id)exportedInterface;
-(void)didFinishWithResult:(id)arg1 error:(id)arg2 ;
-(void)setProductActivityViewController:(SKStoreProductActivityViewController *)arg1 ;
-(SKStoreProductActivityViewController *)productActivityViewController;
@end

