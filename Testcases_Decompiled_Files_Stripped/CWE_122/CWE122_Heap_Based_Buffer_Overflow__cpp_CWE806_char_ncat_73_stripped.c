
void FUN_00101a8e(undefined8 param_1)

{
  FUN_00101aae(param_1);
  return;
}




void FUN_001015ad(undefined8 param_1)

{
  char *__s;
  undefined8 *puVar1;
  size_t __n;
  long in_FS_OFFSET;
  char local_48 [48];
  ushort local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_00101672(param_1);
  __s = (char *)*puVar1;
  local_48[0] = '\0';
  local_48[1] = '\0';
  local_48[2] = '\0';
  local_48[3] = '\0';
  local_48[4] = '\0';
  local_48[5] = '\0';
  local_48[6] = '\0';
  local_48[7] = '\0';
  local_48[8] = '\0';
  local_48[9] = '\0';
  local_48[10] = '\0';
  local_48[0xb] = '\0';
  local_48[0xc] = '\0';
  local_48[0xd] = '\0';
  local_48[0xe] = '\0';
  local_48[0xf] = '\0';
  local_48[0x10] = '\0';
  local_48[0x11] = '\0';
  local_48[0x12] = '\0';
  local_48[0x13] = '\0';
  local_48[0x14] = '\0';
  local_48[0x15] = '\0';
  local_48[0x16] = '\0';
  local_48[0x17] = '\0';
  local_48[0x18] = '\0';
  local_48[0x19] = '\0';
  local_48[0x1a] = '\0';
  local_48[0x1b] = '\0';
  local_48[0x1c] = '\0';
  local_48[0x1d] = '\0';
  local_48[0x1e] = '\0';
  local_48[0x1f] = '\0';
  local_48[0x20] = '\0';
  local_48[0x21] = '\0';
  local_48[0x22] = '\0';
  local_48[0x23] = '\0';
  local_48[0x24] = '\0';
  local_48[0x25] = '\0';
  local_48[0x26] = '\0';
  local_48[0x27] = '\0';
  local_48[0x28] = '\0';
  local_48[0x29] = '\0';
  local_48[0x2a] = '\0';
  local_48[0x2b] = '\0';
  local_48[0x2c] = '\0';
  local_48[0x2d] = '\0';
  local_48[0x2e] = '\0';
  local_48[0x2f] = '\0';
  local_18 = 0;
  __n = strlen(__s);
  strncat(local_48,__s,__n);
  local_18 = local_18 & 0xff;
  FUN_00102548(__s);
  if (__s != (char *)0x0) {
    operator_delete__(__s);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101f86(void)

{
  return;
}




long * FUN_0010171c(long *param_1)

{
  *param_1 = *(long *)(*param_1 + 8);
  return param_1;
}




undefined8 FUN_0010251e(undefined8 param_1)

{
  return param_1;
}




void FUN_00101b64(undefined8 param_1)

{
  FUN_00101ce2(param_1);
  FUN_00101a8e(param_1);
  return;
}




void FUN_0010274c(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00102a69(void)

{
  return;
}




undefined8 FUN_00102c78(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00102d33(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101c16(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  undefined local_21;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00101e42(param_2);
  FUN_00101df1(&local_21,uVar1);
  FUN_00101e54(param_1,&local_21);
  FUN_00101b90(&local_21);
  uVar1 = FUN_00101edc(param_2);
  uVar2 = FUN_00101e8c(param_2);
                    /* try { // try from 00101ca2 to 00101ca6 has its CatchHandler @ 00101ca9 */
  FUN_00101f28(param_1,uVar2,uVar1);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001027d8(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




bool FUN_00102c1d(pthread_t *param_1)

{
  int iVar1;
  long in_FS_OFFSET;
  void *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  iVar1 = pthread_join(*param_1,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return iVar1 == 0;
}




void FUN_00102b03(void)

{
  return;
}




void FUN_001023e2(long param_1)

{
  FUN_001024b0(param_1 + 0x10);
  return;
}




void FUN_00101fa8(undefined8 param_1,undefined8 param_2)

{
  FUN_0010228c(param_1,param_2);
  return;
}




undefined8 FUN_00101e42(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00101f96(undefined8 param_1)

{
  return param_1;
}




void FUN_0010269f(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001025f4(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




undefined8 FUN_00101e8c(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001021b4(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00102160(undefined8 param_1)

{
  return param_1;
}




int FUN_00102a39(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00101ae4(undefined8 param_1)

{
  FUN_00101b90(param_1);
  return;
}




void FUN_00102674(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_001018ea(void)

{
  long in_FS_OFFSET;
  void *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101b24(local_58);
                    /* try { // try from 00101917 to 0010198c has its CatchHandler @ 001019d8 */
  local_60 = operator_new__(100);
  memset(local_60,0x41,0x31);
  *(undefined *)((long)local_60 + 0x31) = 0;
  FUN_00101bdc(local_58,&local_60);
  FUN_00101bdc(local_58,&local_60);
  FUN_00101bdc(local_58,&local_60);
  FUN_00101c16(local_38,local_58);
                    /* try { // try from 00101994 to 00101998 has its CatchHandler @ 001019c3 */
  FUN_001015ad(local_38);
  FUN_00101b44(local_38);
  FUN_00101b44(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001024b0(undefined8 param_1)

{
  FUN_0010251e(param_1);
  return;
}




void FUN_00102a95(void)

{
  return;
}




void FUN_001023ce(void)

{
  return;
}




void FUN_00102404(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




undefined8 FUN_00102b50(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

{
  int iVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  pthread_t local_20;
  pthread_t *local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  *param_3 = 0;
  local_18 = (pthread_t *)malloc(0x18);
  if (local_18 == (pthread_t *)0x0) {
    uVar2 = 0;
  }
  else {
    local_18[1] = param_1;
    local_18[2] = param_2;
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00102b19,local_18);
    if (iVar1 == 0) {
      *local_18 = local_20;
      *param_3 = local_18;
      uVar2 = 1;
    }
    else {
      free(local_18);
      uVar2 = 0;
    }
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar2;
}




undefined8 FUN_00102c9b(undefined8 *param_1)

{
  int iVar1;
  pthread_mutex_t *__mutex;
  undefined8 uVar2;
  
  *param_1 = 0;
  __mutex = (pthread_mutex_t *)malloc(0x28);
  if (__mutex == (pthread_mutex_t *)0x0) {
    uVar2 = 0;
  }
  else {
    iVar1 = pthread_mutex_init(__mutex,(pthread_mutexattr_t *)0x0);
    if (iVar1 == 0) {
      *param_1 = __mutex;
      uVar2 = 1;
    }
    else {
      free(param_1);
      uVar2 = 0;
    }
  }
  return uVar2;
}




void FUN_00102aab(void)

{
  return;
}




void FUN_0010223e(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102001(param_2);
  uVar2 = FUN_001016d0(param_1);
  FUN_00101d90(param_1,uVar2,uVar1);
  return;
}




void FUN_0010229f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102404(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00102459(undefined8 param_1)

{
  return param_1;
}




void FUN_00101a02(void)

{
  FUN_001018ea();
  return;
}




void FUN_00102ab6(void)

{
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00105ee0)();
  return;
}




void FUN_001021b4(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_001026ca(undefined4 param_1)

{
  long in_FS_OFFSET;
  undefined4 local_18;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = 0;
  local_18 = param_1;
  printf("%ls\n",&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102df0(void)

{
  return;
}




undefined8 FUN_00101edc(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001021b4(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001017d2(void)

{
  long in_FS_OFFSET;
  void *local_60;
  undefined local_58 [32];
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101b24(local_58);
                    /* try { // try from 001017ff to 00101874 has its CatchHandler @ 001018c0 */
  local_60 = operator_new__(100);
  memset(local_60,0x41,99);
  *(undefined *)((long)local_60 + 99) = 0;
  FUN_00101bdc(local_58,&local_60);
  FUN_00101bdc(local_58,&local_60);
  FUN_00101bdc(local_58,&local_60);
  FUN_00101c16(local_38,local_58);
                    /* try { // try from 0010187c to 00101880 has its CatchHandler @ 001018ab */
  FUN_001014e9(local_38);
  FUN_00101b44(local_38);
  FUN_00101b44(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102aed(void)

{
  return;
}




ulong FUN_00102838(long param_1,ulong param_2,long param_3)

{
  ushort **ppuVar1;
  long in_FS_OFFSET;
  undefined local_1c [4];
  ulong local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  for (local_18 = 0; local_18 < param_2; local_18 = local_18 + 1) {
    ppuVar1 = __ctype_b_loc();
    if (((*ppuVar1)[*(char *)(param_3 + local_18 * 2)] & 0x1000) == 0) break;
    ppuVar1 = __ctype_b_loc();
    if (((*ppuVar1)[*(char *)(param_3 + local_18 * 2 + 1)] & 0x1000) == 0) break;
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_00103090,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102ae2(void)

{
  return;
}




void FUN_00101740(undefined8 *param_1)

{
  FUN_00101780(*param_1);
  return;
}




void FUN_00101fd2(undefined8 param_1,undefined8 param_2)

{
  FUN_0010229f(param_1,param_2,1);
  return;
}




void FUN_001014e9(undefined8 param_1)

{
  char *__s;
  undefined8 *puVar1;
  size_t __n;
  long in_FS_OFFSET;
  char local_48 [48];
  ushort local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_00101672(param_1);
  __s = (char *)*puVar1;
  local_48[0] = '\0';
  local_48[1] = '\0';
  local_48[2] = '\0';
  local_48[3] = '\0';
  local_48[4] = '\0';
  local_48[5] = '\0';
  local_48[6] = '\0';
  local_48[7] = '\0';
  local_48[8] = '\0';
  local_48[9] = '\0';
  local_48[10] = '\0';
  local_48[0xb] = '\0';
  local_48[0xc] = '\0';
  local_48[0xd] = '\0';
  local_48[0xe] = '\0';
  local_48[0xf] = '\0';
  local_48[0x10] = '\0';
  local_48[0x11] = '\0';
  local_48[0x12] = '\0';
  local_48[0x13] = '\0';
  local_48[0x14] = '\0';
  local_48[0x15] = '\0';
  local_48[0x16] = '\0';
  local_48[0x17] = '\0';
  local_48[0x18] = '\0';
  local_48[0x19] = '\0';
  local_48[0x1a] = '\0';
  local_48[0x1b] = '\0';
  local_48[0x1c] = '\0';
  local_48[0x1d] = '\0';
  local_48[0x1e] = '\0';
  local_48[0x1f] = '\0';
  local_48[0x20] = '\0';
  local_48[0x21] = '\0';
  local_48[0x22] = '\0';
  local_48[0x23] = '\0';
  local_48[0x24] = '\0';
  local_48[0x25] = '\0';
  local_48[0x26] = '\0';
  local_48[0x27] = '\0';
  local_48[0x28] = '\0';
  local_48[0x29] = '\0';
  local_48[0x2a] = '\0';
  local_48[0x2b] = '\0';
  local_48[0x2c] = '\0';
  local_48[0x2d] = '\0';
  local_48[0x2e] = '\0';
  local_48[0x2f] = '\0';
  local_18 = 0;
  __n = strlen(__s);
  strncat(local_48,__s,__n);
  local_18 = local_18 & 0xff;
  FUN_00102548(__s);
  if (__s != (char *)0x0) {
    operator_delete__(__s);
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010246c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00102001(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_00101a77(8,param_2);
  *puVar2 = uVar1;
  return;
}




void _FINI_0(void)

{
  if (DAT_00106020 == '\0') {
    if (PTR___cxa_finalize_00105fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00106008);
    }
    FUN_00101430();
    DAT_00106020 = 1;
    return;
  }
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101484) */
/* WARNING: Removing unreachable block (ram,0x00101490) */

void FUN_00101460(void)

{
  return;
}




undefined8 FUN_001016d0(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101762(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102af8(void)

{
  return;
}




undefined8 FUN_00102a1b(void)

{
  return 1;
}




undefined8 * FUN_001021f8(undefined8 *param_1)

{
  *param_1 = *(undefined8 *)*param_1;
  return param_1;
}




undefined8 FUN_00102530(void)

{
  return 0x555555555555555;
}




void FUN_00101f28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  char cVar1;
  undefined8 uVar2;
  undefined8 local_20;
  undefined8 local_18;
  undefined8 local_10;
  
  local_20 = param_3;
  local_18 = param_2;
  local_10 = param_1;
  while( true ) {
    cVar1 = FUN_001021d2(&local_18,&local_20);
    if (cVar1 == '\0') break;
    uVar2 = FUN_0010221c(&local_18);
    FUN_0010223e(local_10,uVar2);
    FUN_001021f8(&local_18);
  }
  return;
}




void FUN_0010236f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102001(param_3);
  FUN_0010246c(param_1,param_2,uVar1);
  return;
}




void FUN_00102b0e(void)

{
  return;
}




void FUN_00101780(long param_1)

{
  FUN_001017a2(param_1 + 0x10);
  return;
}




void FUN_001017a2(undefined8 param_1)

{
  FUN_001017c0(param_1);
  return;
}




undefined8 FUN_00101a77(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




ulong FUN_0010293c(long param_1,ulong param_2,long param_3)

{
  int iVar1;
  long in_FS_OFFSET;
  undefined local_1c [4];
  ulong local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  for (local_18 = 0; local_18 < param_2; local_18 = local_18 + 1) {
    iVar1 = iswxdigit(*(wint_t *)(param_3 + local_18 * 8));
    if (iVar1 == 0) break;
    iVar1 = iswxdigit(*(wint_t *)(param_3 + local_18 * 8 + 4));
    if (iVar1 == 0) break;
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_00103098,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001025a0(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




undefined8 FUN_00102a2a(void)

{
  return 0;
}




void FUN_00101b04(undefined8 param_1)

{
  FUN_00101b64(param_1);
  return;
}




void FUN_0010242b(undefined8 param_1,undefined8 param_2)

{
  FUN_001024ce(param_1,param_2,0);
  return;
}




void FUN_00102aa0(void)

{
  return;
}




undefined8 FUN_00101a12(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00102548("Calling good()...");
  FUN_00101a02();
  FUN_00102548("Finished good()");
  FUN_00102548("Calling bad()...");
  FUN_001017d2();
  FUN_00102548("Finished bad()");
  return 0;
}




void FUN_00101d12(undefined8 *param_1)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_20;
  
  local_20 = (undefined8 *)*param_1;
  while (local_20 != param_1) {
    puVar1 = (undefined8 *)*local_20;
    uVar2 = FUN_00101780(local_20);
    uVar3 = FUN_00101f96(param_1);
    FUN_00101fa8(uVar3,uVar2);
    FUN_00101fd2(param_1,local_20);
    local_20 = puVar1;
  }
  return;
}




undefined8 FUN_00101df1(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102108(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00101bdc(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001016d0(param_1);
  FUN_00101d90(param_1,uVar1,param_2);
  return;
}




void FUN_001027a5(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_001020de(long param_1,long param_2)

{
  *(long *)(param_1 + 0x10) = *(long *)(param_1 + 0x10) + param_2;
  return;
}




void FUN_00102a7f(void)

{
  return;
}




void FUN_00102d52(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00101d02(void)

{
  return;
}




void FUN_0010221c(undefined8 *param_1)

{
  FUN_001023e2(*param_1);
  return;
}




void FUN_00102d80(undefined4 param_1,undefined8 param_2,undefined8 param_3)

{
  long lVar1;
  
  _DT_INIT();
  lVar1 = 0;
  do {
    (*(code *)(&__DT_INIT_ARRAY)[lVar1])(param_1,param_2,param_3);
    lVar1 = lVar1 + 1;
  } while (lVar1 != 1);
  return;
}




void FUN_001025c8(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101b44(undefined8 param_1)

{
  FUN_00101bb0(param_1);
  return;
}




void FUN_00101bb0(undefined8 param_1)

{
  FUN_00101d12(param_1);
  FUN_00101ae4(param_1);
  return;
}




void FUN_00102136(undefined8 param_1,undefined8 param_2)

{
  FUN_001023ce(param_1,param_2);
  return;
}




long FUN_001023ac(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  return param_1;
}




void FUN_00102a5e(void)

{
  return;
}




void FUN_00102ac1(void)

{
  return;
}




void FUN_00102ad7(void)

{
  return;
}




void FUN_00102a53(void)

{
  return;
}




void FUN_00102a74(void)

{
  return;
}




void FUN_001022f6(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102459(param_2);
  *param_1 = uVar1;
  param_1[1] = param_3;
  return;
}




void FUN_001024ce(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00102530(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x18);
  return;
}




void FUN_00102b19(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




undefined8 FUN_00102108(undefined8 param_1,undefined8 param_2)

{
  FUN_00102136(param_1,param_2);
  return param_1;
}




undefined8 FUN_00102014(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_001022d2(param_1);
  uVar2 = FUN_00101f96(param_1);
  FUN_001022f6(local_38,uVar2,uVar1);
  uVar3 = FUN_00102001(param_2);
  uVar4 = FUN_00101780(uVar1);
  FUN_0010236f(uVar2,uVar4,uVar3);
  FUN_001023ac(local_38,0);
  FUN_00102330(local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return uVar1;
}




void FUN_00101762(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




undefined8 FUN_001017c0(undefined8 param_1)

{
  return param_1;
}




void FUN_00102548(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_001022d2(undefined8 param_1)

{
  FUN_0010242b(param_1,1);
  return;
}




void FUN_00102acc(void)

{
  return;
}




void FUN_00101672(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_18 = FUN_001016d0(param_1);
  FUN_0010171c(&local_18);
  FUN_00101740(&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101e54(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102160(param_2);
  FUN_00102172(param_1,uVar1);
  return;
}




undefined8 FUN_00102001(undefined8 param_1)

{
  return param_1;
}




void FUN_00101ce2(undefined8 param_1)

{
  FUN_00101f86(param_1);
  return;
}




undefined8 FUN_001021d2(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 != *param_2);
}




void FUN_00102777(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00102172(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102160(param_2);
  FUN_00102136(param_1,uVar1);
  FUN_00101a8e(param_1);
  return;
}




void FUN_0010228c(void)

{
  return;
}




void FUN_0010256e(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00102724(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00102d14(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00102330(undefined8 *param_1)

{
  if (param_1[1] != 0) {
    FUN_0010229f(*param_1,param_1[1],1);
  }
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101443) */
/* WARNING: Removing unreachable block (ram,0x0010144f) */

void FUN_00101430(void)

{
  return;
}




void FUN_00101d90(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  _List_node_base *p_Var2;
  
  uVar1 = FUN_00102001(param_3);
  p_Var2 = (_List_node_base *)FUN_00102014(param_1,uVar1);
  std::__detail::_List_node_base::_M_hook(p_Var2);
  FUN_001020de(param_1,1);
  return;
}




void FUN_00101aae(undefined8 *param_1)

{
  param_1[1] = param_1;
  *param_1 = param_1[1];
  param_1[2] = 0;
  return;
}




void FUN_00101b24(undefined8 param_1)

{
  FUN_00101b04(param_1);
  return;
}




void FUN_00101b90(undefined8 param_1)

{
  FUN_00101d02(param_1);
  return;
}




void FUN_00102649(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_0010261e(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00102a8a(void)

{
  return;
}



