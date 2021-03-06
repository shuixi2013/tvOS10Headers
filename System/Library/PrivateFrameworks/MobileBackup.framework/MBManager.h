/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, March 22, 2017 at 9:05:03 AM Mountain Standard Time
* Operating System: Version 10.1 (Build 14U593)
* Image Source: /System/Library/PrivateFrameworks/MobileBackup.framework/MobileBackup
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <MobileBackup/MobileBackup-Structs.h>
@interface MBManager : NSObject {

	id _delegate;

}

@property (assign,nonatomic) NSObject*<MBManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)cancel;
-(void)setDelegate:(NSObject*<MBManagerDelegate>)arg1 ;
-(id)init;
-(NSObject*<MBManagerDelegate>)delegate;
-(id)_init;
-(id)initWithDelegate:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 eventQueue:(id)arg2 ;
-(id)restoreFilesForDomain:(id)arg1 relativePath:(id)arg2 pendingOnly:(BOOL)arg3 range:(NSRange)arg4 error:(id*)arg5 ;
-(BOOL)isBackupEnabled;
-(void)setBackupEnabled:(BOOL)arg1 ;
-(void)syncBackupEnabled;
-(BOOL)unsetLocalBackupPasswordWithError:(id*)arg1 ;
-(id)backupState;
-(id)backupDeviceUUID;
-(id)backupList;
-(id)getBackupListWithError:(id*)arg1 ;
-(id)getBackupListWithFiltering:(BOOL)arg1 error:(id*)arg2 ;
-(BOOL)recordRestoreFailure:(id)arg1 error:(id*)arg2 ;
-(id)restoreFailuresForDataclass:(id)arg1 assetType:(id)arg2 range:(NSRange)arg3 ;
-(unsigned long long)countOfRestoreFailuresForDataclass:(id)arg1 assetType:(id)arg2 ;
-(void)startBackup;
-(BOOL)startBackupWithError:(id*)arg1 ;
-(id)filesForSnapshotID:(unsigned long long)arg1 backupUDID:(id)arg2 error:(id*)arg3 ;
-(BOOL)mergeSnapshots:(id)arg1 backupUUID:(id)arg2 error:(id*)arg3 ;
-(id)journalForBackupUUID:(id)arg1 error:(id*)arg2 ;
-(id)restoreState;
-(BOOL)restoreFileExistsWithPath:(id)arg1 ;
-(BOOL)restoreDataExistsForApplicationWithBundleID:(id)arg1 size:(unsigned long long*)arg2 ;
-(id)restoreFilesForDomain:(id)arg1 error:(id*)arg2 ;
-(id)restoreFilesForDomain:(id)arg1 relativePath:(id)arg2 pendingOnly:(BOOL)arg3 error:(id*)arg4 ;
-(void)prioritizeRestoreFileWithPath:(id)arg1 ;
-(id)dateOfLastBackup;
-(id)dateOfNextScheduledBackup;
-(BOOL)restoreSupportsBatching;
-(void)startRestoreForBackupUDID:(id)arg1 snapshotID:(unsigned long long)arg2 ;
-(BOOL)startRestoreForBackupUDID:(id)arg1 snapshotID:(unsigned long long)arg2 error:(id*)arg3 ;
-(BOOL)restoreFileWithPath:(id)arg1 error:(id*)arg2 ;
-(BOOL)restoreFileWithPath:(id)arg1 context:(id)arg2 error:(id*)arg3 ;
-(void)restoreFileWithPath:(id)arg1 ;
-(BOOL)restoreFilesWithPaths:(id)arg1 error:(id*)arg2 ;
-(BOOL)restoreFilesWithPaths:(id)arg1 context:(id)arg2 error:(id*)arg3 ;
-(BOOL)restoreApplicationWithBundleID:(id)arg1 failed:(BOOL)arg2 error:(id*)arg3 ;
-(BOOL)restoreApplicationWithBundleID:(id)arg1 failed:(BOOL)arg2 context:(id)arg3 error:(id*)arg4 ;
-(BOOL)restoreApplicationWithBundleID:(id)arg1 failed:(BOOL)arg2 withQOS:(long long)arg3 context:(id)arg4 error:(id*)arg5 ;
-(BOOL)cancelApplicationRestoreWithBundleID:(id)arg1 error:(id*)arg2 ;
-(BOOL)saveKeybagsForBackupUDID:(id)arg1 withError:(id*)arg2 ;
-(void)finishRestore;
-(void)insufficientFreeSpaceToRestore;
-(void)cancelRestore;
-(BOOL)deleteBackupUDID:(id)arg1 error:(id*)arg2 ;
-(BOOL)startScanWithError:(id*)arg1 ;
-(BOOL)startScanForBundleIDs:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)nextBackupSize;
-(id)nextBackupSizeInfo;
-(id)domainInfoList;
-(BOOL)removeDomainName:(id)arg1 error:(id*)arg2 ;
-(id)reservedBackupSizeListWithError:(id*)arg1 ;
-(BOOL)isBackupEnabledForDomainName:(id)arg1 ;
-(void)setBackupEnabled:(BOOL)arg1 forDomainName:(id)arg2 ;
-(BOOL)extractItemFromBackupUDID:(id)arg1 snapshotID:(unsigned long long)arg2 domainName:(id)arg3 relativePath:(id)arg4 toPath:(id)arg5 error:(id*)arg6 ;
-(BOOL)addFileToBackupUDID:(id)arg1 snapshotID:(unsigned long long)arg2 domainName:(id)arg3 relativePath:(id)arg4 fromPath:(id)arg5 error:(id*)arg6 ;
-(BOOL)deleteItemFromBackupUDID:(id)arg1 snapshotID:(unsigned long long)arg2 domainName:(id)arg3 relativePath:(id)arg4 error:(id*)arg5 ;
-(id)getAppleIDsForBackupUDID:(id)arg1 snapshotID:(unsigned long long)arg2 error:(id*)arg3 ;
-(id)getAppleIDsForBackupUDID:(id)arg1 snapshotID:(unsigned long long)arg2 activeAppleID:(id*)arg3 error:(id*)arg4 ;
-(id)restoreInfo;
-(void)setRestoreSessionWithBackupUDID:(id)arg1 snapshotUUID:(id)arg2 ;
-(void)clearRestoreSession;
-(void)setAllowiTunesBackup:(BOOL)arg1 ;
-(BOOL)allowiTunesBackup;
-(BOOL)countCameraRollQuotaForBackupUDID:(id)arg1 error:(id*)arg2 ;
-(BOOL)discountCameraRollQuotaForBackupUDID:(id)arg1 error:(id*)arg2 ;
-(void)rebootDevice;
-(BOOL)prepareForBackgroundRestoreWithError:(id*)arg1 ;
-(BOOL)archiveLogsTo:(id)arg1 error:(id*)arg2 ;
-(BOOL)pinSnapshotID:(unsigned long long)arg1 backupUDID:(id)arg2 error:(id*)arg3 ;
-(BOOL)unpinSnapshotID:(unsigned long long)arg1 backupUDID:(id)arg2 error:(id*)arg3 ;
-(BOOL)setupBackupWithPasscode:(id)arg1 error:(id*)arg2 ;
-(BOOL)countCameraRollQuota;
-(BOOL)discountCameraRollQuota;
-(id)domainInfoForName:(id)arg1 ;
@end

