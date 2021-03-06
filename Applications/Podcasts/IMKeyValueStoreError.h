//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSError.h"

@class IMKeyValueStoreTransaction;

@interface IMKeyValueStoreError : NSError
{
    IMKeyValueStoreTransaction *_transaction;	// 40 = 0x28
}

+ (id)serverClampErrorWithTransaction:(id)arg1 retrySeconds:(double)arg2 underlyingError:(id)arg3;	// IMP=0x000000010005f46c
+ (id)userClampErrorWithTransaction:(id)arg1 retrySeconds:(double)arg2 underlyingError:(id)arg3;	// IMP=0x000000010005f378
+ (id)delegateCancelledErrorWithTransaction:(id)arg1 underlyingError:(id)arg2;	// IMP=0x000000010005f360
+ (id)transactionCancelledErrorWithTransaction:(id)arg1 underlyingError:(id)arg2;	// IMP=0x000000010005f348
+ (id)transactionTimeoutErrorWithTransaction:(id)arg1 underlyingError:(id)arg2;	// IMP=0x000000010005f330
+ (id)transactionCancelledErrorWithTransaction:(id)arg1 code:(long long)arg2 underlyingError:(id)arg3;	// IMP=0x000000010005edc0
+ (id)transactionMissingURLErrorWithTransaction:(id)arg1 underlyingError:(id)arg2;	// IMP=0x000000010005ed2c
+ (id)transactionMissingDomainErrorWithTransaction:(id)arg1 underlyingError:(id)arg2;	// IMP=0x000000010005ec98
+ (id)storeAccountSessionExpiredWithTransaction:(id)arg1 underlyingError:(id)arg2;	// IMP=0x000000010005ec04
+ (id)noStoreAccountErrorWithTransaction:(id)arg1 underlyingError:(id)arg2;	// IMP=0x000000010005eb70
+ (id)userEnteredWrongCredentialsErrorWithTransaction:(id)arg1 underlyingError:(id)arg2;	// IMP=0x000000010005eadc
+ (id)userCancelledSignInErrorWithTransaction:(id)arg1 underlyingError:(id)arg2;	// IMP=0x000000010005ea48
+ (id)storeValidationErrorWithTransaction:(id)arg1 underlyingError:(id)arg2;	// IMP=0x000000010005e9d8
+ (id)storeGenericErrorWithTransaction:(id)arg1 underlyingError:(id)arg2;	// IMP=0x000000010005e968
+ (id)storeAccountMismatchErrorWithPreviousStoreAccountText:(id)arg1 currentStoreAccontText:(id)arg2 transaction:(id)arg3 underlyingError:(id)arg4;	// IMP=0x000000010005e878
+ (id)storeLoggedOutErrorWithPreviousStoreAccountText:(id)arg1 transaction:(id)arg2 underlyingError:(id)arg3;	// IMP=0x000000010005e7a4
+ (id)killSwitchErrorWithTransaction:(id)arg1 underlyingError:(id)arg2;	// IMP=0x000000010005e710
+ (id)networkingBlockedErrorWithTransaction:(id)arg1 underlyingError:(id)arg2;	// IMP=0x000000010005e67c
+ (id)keyValueStoreDisabledErrorWithTransaction:(id)arg1 underlyingError:(id)arg2;	// IMP=0x000000010005e5e8
+ (id)unknownErrorWithTransaction:(id)arg1 underlyingError:(id)arg2;	// IMP=0x000000010005e548
+ (id)keyValueStoreErrorWithCode:(long long)arg1 localizedDescription:(id)arg2 transaction:(id)arg3 underlyingError:(id)arg4;	// IMP=0x000000010005e3f8
@property(retain, nonatomic) IMKeyValueStoreTransaction *transaction; // @synthesize transaction=_transaction;
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x000000010005e38c
- (double)retrySeconds;	// IMP=0x000000010005e354
- (id)currentStoreAccountKey;	// IMP=0x000000010005e328
- (id)previousStoreAccountKey;	// IMP=0x000000010005e2fc
- (_Bool)isTransactionMissingInformationError;	// IMP=0x000000010005e2d4
- (_Bool)isTransactionCancelledError;	// IMP=0x000000010005e2ac
- (_Bool)isClampError;	// IMP=0x000000010005e284
- (_Bool)isRecoverableError;	// IMP=0x000000010005e224
- (_Bool)isAccountsChangedError;	// IMP=0x000000010005e1f0
- (_Bool)isAuthenticationError;	// IMP=0x000000010005e1c8
- (id)description;	// IMP=0x000000010005e150
- (void)dealloc;	// IMP=0x000000010005e0f0

@end

