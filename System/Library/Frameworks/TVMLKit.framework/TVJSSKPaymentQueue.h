/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:07:38 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/Frameworks/TVMLKit.framework/TVMLKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ITMLKit/IKJSObject.h>
#import <libobjc.A.dylib/SKPaymentTransactionObserver.h>
#import <TVMLKit/TVJSSKPaymentQueue.h>
@class NSArray;


@protocol TVJSSKPaymentQueue <JSExport>
@property (nonatomic,readonly) NSArray * transactions; 
@required
+(id)defaultQueue;
+(BOOL)canMakePayments;
+(id)appStoreReceipt;
-(void)addPayment:(id)arg1;
-(void)restoreCompletedTransactions;
-(void)restoreCompletedTransactionsWithApplicationUsername:(id)arg1;
-(void)finishTransaction:(id)arg1;
-(void)addTransactionObserver:(id)arg1;
-(void)removeTransactionObserver:(id)arg1;
-(NSArray *)transactions;

@end


@class NSArray, SKPaymentQueue, NSMutableDictionary, NSString;

@interface TVJSSKPaymentQueue : IKJSObject <SKPaymentTransactionObserver, TVJSSKPaymentQueue> {

	SKPaymentQueue* _paymentQueue;
	NSMutableDictionary* _jsObservers;

}

@property (nonatomic,readonly) SKPaymentQueue * wrappedPaymentQueue; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * transactions; 
+(id)defaultQueue;
+(BOOL)canMakePayments;
+(id)appStoreReceipt;
-(id)initWithPaymentQueue:(id)arg1 appContext:(id)arg2 ;
-(void)addPayment:(id)arg1 ;
-(void)restoreCompletedTransactions;
-(void)restoreCompletedTransactionsWithApplicationUsername:(id)arg1 ;
-(void)finishTransaction:(id)arg1 ;
-(void)addTransactionObserver:(id)arg1 ;
-(void)removeTransactionObserver:(id)arg1 ;
-(void)paymentQueue:(id)arg1 updatedTransactions:(id)arg2 ;
-(void)paymentQueue:(id)arg1 removedTransactions:(id)arg2 ;
-(void)paymentQueue:(id)arg1 restoreCompletedTransactionsFailedWithError:(id)arg2 ;
-(void)paymentQueueRestoreCompletedTransactionsFinished:(id)arg1 ;
-(SKPaymentQueue *)wrappedPaymentQueue;
-(NSArray *)transactions;
@end

