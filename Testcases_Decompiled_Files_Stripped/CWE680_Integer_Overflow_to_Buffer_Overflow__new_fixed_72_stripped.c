
void FUN_00103704(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




ulong FUN_0010391e(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001040a8,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103b65(void)

{
  return;
}




void FUN_00101684(void)

{
  long in_FS_OFFSET;
  undefined4 local_64;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001018ca(local_58);
  local_64 = 0x14;
  local_60 = FUN_001019d0(local_58);
  FUN_00101a20(local_38,&local_60);
                    /* try { // try from 001016f4 to 00101789 has its CatchHandler @ 001017d5 */
  FUN_00101a4e(local_58,local_38[0],1,&local_64);
  local_60 = FUN_001019d0(local_58);
  FUN_00101a20(local_38,&local_60);
  FUN_00101a4e(local_58,local_38[0],1,&local_64);
  local_60 = FUN_001019d0(local_58);
  FUN_00101a20(local_38,&local_60);
  FUN_00101a4e(local_58,local_38[0],1,&local_64);
  FUN_00101b14(local_38,local_58);
                    /* try { // try from 00101791 to 00101795 has its CatchHandler @ 001017c0 */
  FUN_00103570(local_38);
  FUN_00101988(local_38);
  FUN_00101988(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001038be(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00102f3c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103113(param_1,param_2,param_3);
  return;
}




void FUN_00101a4e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined8 local_38;
  undefined8 local_30;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = param_2;
  local_30 = param_1;
  local_20 = FUN_00101d44(param_1);
  local_18 = FUN_00101d9b(&local_38,&local_20);
  local_20 = FUN_00102300(local_30);
  uVar1 = FUN_0010234c(&local_20,local_18);
  FUN_00101de0(local_30,uVar1,param_3,param_4);
  local_20 = FUN_00102300(local_30);
  FUN_0010234c(&local_20,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103359(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  uVar1 = FUN_00102cb2(param_3);
  uVar2 = FUN_00102cb2(local_28);
  uVar3 = FUN_00102cb2(local_20);
  uVar1 = FUN_0010343f(uVar3,uVar2,uVar1);
  FUN_00102f26(&local_30,uVar1);
  return;
}




long FUN_0010309d(void *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 2;
  if (lVar1 != 0) {
    memmove((void *)(lVar1 * -4 + param_3),param_1,lVar1 * 4);
  }
  return param_3 + lVar1 * -4;
}




undefined8 FUN_00103d81(undefined8 *param_1)

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




void FUN_00101b14(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_0010242a(param_2);
  FUN_001023d9(&local_31,uVar1);
  uVar1 = FUN_001023b2(param_2);
                    /* try { // try from 00101b7a to 00101b7e has its CatchHandler @ 00101be7 */
  FUN_0010243c(param_1,uVar1,&local_31);
  FUN_00101916(&local_31);
  uVar2 = FUN_00101cd0(param_1);
  uVar1 = *param_1;
  uVar3 = FUN_001024fa(param_2);
  uVar4 = FUN_001024a2(param_2);
                    /* try { // try from 00101bc8 to 00101bcc has its CatchHandler @ 00101c05 */
  uVar1 = FUN_00102552(uVar4,uVar3,uVar1,uVar2);
  param_1[1] = uVar1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102688(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102b22(param_1);
  FUN_00102b87(*param_1,uVar1);
  return;
}




void FUN_0010271e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102bb1(param_2);
  uVar2 = FUN_00102bb1(param_1);
  FUN_00102bfd(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_001032fe(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001033c7(param_1,param_2,param_3);
  return;
}




void FUN_001025c9(undefined8 param_1,undefined8 param_2)

{
  FUN_00102b0f(param_1,param_2);
  return;
}




undefined8 FUN_001029cb(undefined8 param_1,undefined8 param_2)

{
  FUN_001029f8(param_1,param_2);
  return param_1;
}




undefined8 FUN_001032dd(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  puVar1 = (undefined8 *)FUN_00102616(&local_10);
  return *puVar1;
}




undefined8 FUN_001031c6(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001019d0(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101d10(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_0010342a(undefined8 *param_1)

{
  return *param_1;
}




void FUN_00101916(undefined8 param_1)

{
  FUN_00101c86(param_1);
  return;
}




undefined8 FUN_00101874(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00101936(long *param_1)

{
  FUN_00101c96(param_1,*param_1,param_1[2] - *param_1 >> 2);
  FUN_0010188a(param_1);
  return;
}




int FUN_00103b1f(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00103b9c(void)

{
  return;
}




void FUN_00102e48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)FUN_00102b38(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined4 *)FUN_00101874(4,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_00102a58(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_0010293c(param_1,param_2);
  *param_1 = lVar1;
  param_1[1] = *param_1;
  param_1[2] = param_2 * 4 + *param_1;
  return;
}




ulong FUN_00103a22(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001040b0,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_001023d9(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001029cb(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00102d89(undefined8 param_1,undefined8 param_2)

{
  FUN_00102fd6(param_1,param_2,0);
  return;
}




void FUN_00102cfe(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102f3c(param_1,param_2,param_3);
  return;
}




undefined8 FUN_0010293c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00102d89(param_1,param_2);
  }
  return uVar1;
}




void FUN_00103bf4(void)

{
  return;
}




void FUN_00103246(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103333(param_2);
  uVar2 = FUN_00103333(param_1);
  FUN_00103359(uVar2,uVar1,param_3);
  return;
}




void FUN_0010188a(undefined8 param_1)

{
  FUN_00101916(param_1);
  return;
}




void FUN_00102ae8(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00103bc8(void)

{
  return;
}




void FUN_00103b70(void)

{
  return;
}




void FUN_00103570(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  ulong local_20;
  
  piVar2 = (int *)FUN_0010360a(param_1,2);
  iVar1 = *piVar2;
  puVar3 = (undefined4 *)operator_new__((long)iVar1 << 2);
  for (local_20 = 0; local_20 < (ulong)(long)iVar1; local_20 = local_20 + 1) {
    puVar3[local_20] = 0;
  }
  FUN_00103686(*puVar3);
  if (puVar3 != (undefined4 *)0x0) {
    operator_delete__(puVar3);
  }
  return;
}




void FUN_00103832(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_0010385d(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00103e38(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




undefined8 FUN_00103b10(void)

{
  return 0;
}




void FUN_001031d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  uVar1 = FUN_00102cb2(param_3);
  uVar2 = FUN_001032dd(local_28);
  uVar3 = FUN_001032dd(local_20);
  uVar1 = FUN_001032fe(uVar3,uVar2,uVar1);
  FUN_00102f26(&local_30,uVar1);
  return;
}




undefined4 * FUN_00103296(undefined4 *param_1,long param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *local_20;
  long local_10;
  
  uVar1 = *param_3;
  local_20 = param_1;
  for (local_10 = param_2; local_10 != 0; local_10 = local_10 + -1) {
    *local_20 = uVar1;
    local_20 = local_20 + 1;
  }
  return local_20;
}




void FUN_00102817(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102cfe(param_1,param_2,param_3);
  return;
}




/* WARNING: Removing unreachable block (ram,0x001014a4) */
/* WARNING: Removing unreachable block (ram,0x001014b0) */

void FUN_00101480(void)

{
  return;
}




void FUN_001036ae(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101d10(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




ulong * FUN_00102d5a(ulong *param_1,ulong *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}




undefined8 FUN_001024fa(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(undefined8 *)(param_1 + 8);
  FUN_001025f4(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010372f(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_00103d5e(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_0010301c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001031c6(param_2);
  uVar2 = FUN_001031c6(param_1);
  FUN_001031d8(uVar2,uVar1,param_3);
  return;
}




void FUN_0010306c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103246(param_1,param_2,param_3);
  return;
}




void FUN_00101509(void)

{
  long in_FS_OFFSET;
  undefined4 local_64;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001018ca(local_58);
  local_64 = 0x40000001;
  local_60 = FUN_001019d0(local_58);
  FUN_00101a20(local_38,&local_60);
                    /* try { // try from 00101579 to 0010160e has its CatchHandler @ 0010165a */
  FUN_00101a4e(local_58,local_38[0],1,&local_64);
  local_60 = FUN_001019d0(local_58);
  FUN_00101a20(local_38,&local_60);
  FUN_00101a4e(local_58,local_38[0],1,&local_64);
  local_60 = FUN_001019d0(local_58);
  FUN_00101a20(local_38,&local_60);
  FUN_00101a4e(local_58,local_38[0],1,&local_64);
  FUN_00101b14(local_38,local_58);
                    /* try { // try from 00101616 to 0010161a has its CatchHandler @ 00101645 */
  FUN_001034d7(local_38);
  FUN_00101988(local_38);
  FUN_00101988(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102e8a(void)

{
  return;
}




void FUN_00103113(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00102cb2(param_1);
  uVar1 = FUN_00103296(uVar1,param_2,param_3);
  FUN_00102f26(&local_10,uVar1);
  return;
}




void FUN_00103b5a(void)

{
  return;
}




undefined8 FUN_0010242a(undefined8 param_1)

{
  return param_1;
}




void FUN_00103b7b(void)

{
  return;
}




undefined8 FUN_00102c32(undefined8 param_1)

{
  return param_1;
}




long FUN_0010360a(long *param_1,long param_2)

{
  return *param_1 + param_2 * 4;
}




void FUN_00102d34(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010242a(param_1);
  FUN_00102f6d(uVar1);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00106ed8)();
  return;
}




undefined8 FUN_00103b01(void)

{
  return 1;
}




undefined8 FUN_00102f6d(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0x1fffffffffffffff;
  local_18 = FUN_00103161(param_1);
  puVar1 = (undefined8 *)FUN_0010317f(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}




void FUN_001018aa(undefined8 param_1)

{
  FUN_001018ea(param_1);
  return;
}




void FUN_00103333(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_0010342a(&local_10);
  FUN_00102c32(uVar1);
  return;
}




void FUN_00102e9e(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




undefined8 FUN_00101d32(undefined8 param_1)

{
  return param_1;
}




void FUN_00102597(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102ae8(param_1,param_2,param_3);
  return;
}




void FUN_0010343f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103474(param_1,param_2,param_3);
  return;
}




void FUN_00103b39(void)

{
  return;
}




void FUN_00103785(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00103686(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101ce2(undefined8 param_1,undefined8 param_2)

{
  FUN_001025c9(param_1,param_2);
  return;
}




undefined8 FUN_0010234c(long *param_1,long param_2)

{
  long in_FS_OFFSET;
  long local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1 + param_2 * 4;
  FUN_00101d10(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101c34(undefined8 param_1)

{
  FUN_00102588(param_1);
  return;
}




void FUN_00103bde(void)

{
  return;
}




void FUN_00102588(void)

{
  return;
}




ulong * FUN_0010317f(ulong *param_1,ulong *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_00102a22(undefined8 param_1,undefined8 param_2)

{
  FUN_001029f8(param_1,param_2);
  FUN_00101c54(param_1);
  return;
}




undefined8 FUN_00101cd0(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102f26(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_0010380a(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




undefined8 FUN_00102300(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101d10(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




/* WARNING: Removing unreachable block (ram,0x00101463) */
/* WARNING: Removing unreachable block (ram,0x0010146f) */

void FUN_00101450(void)

{
  return;
}




void FUN_001025f4(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




undefined8 FUN_00103c36(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00103bff,local_18);
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




void FUN_00103b86(void)

{
  return;
}




void FUN_0010362e(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_001017ff(void)

{
  FUN_00101684();
  return;
}




undefined8 FUN_00102db7(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102e9e(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103161(undefined8 param_1)

{
  FUN_001031ae(param_1);
  return;
}




void FUN_0010388b(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




undefined8 FUN_001024a2(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_001025f4(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




long FUN_00102b22(long param_1)

{
  return param_1 + 8;
}




void _FINI_0(void)

{
  if (DAT_00107020 == '\0') {
    if (PTR___cxa_finalize_00106fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00107008);
    }
    FUN_00101450();
    DAT_00107020 = 1;
    return;
  }
  return;
}




void FUN_00102b0f(void)

{
  return;
}




void FUN_00101c96(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FUN_00102597(param_1,param_2,param_3);
  }
  return;
}




void FUN_00103e70(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




undefined8 FUN_00101d44(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_001025f4(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void * FUN_001033c7(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 2;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 4);
  }
  return (void *)((long)param_3 + lVar1 * 4);
}




void FUN_00102cc4(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *local_20;
  
  uVar1 = *param_3;
  for (local_20 = param_1; local_20 != param_2; local_20 = local_20 + 1) {
    *local_20 = uVar1;
  }
  return;
}




void FUN_00103bbd(void)

{
  return;
}




void FUN_00103bff(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00102b87(undefined8 param_1,undefined8 param_2)

{
  FUN_00102e8a(param_1,param_2);
  return;
}




void FUN_00102e04(void)

{
  return;
}




undefined8 FUN_0010180f(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_0010362e("Calling good()...");
  FUN_001017ff();
  FUN_0010362e("Finished good()");
  FUN_0010362e("Calling bad()...");
  FUN_00101509();
  FUN_0010362e("Finished bad()");
  return 0;
}




void FUN_00103b44(void)

{
  return;
}




void FUN_00103654(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00103e19(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




undefined8 FUN_00102bb1(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102e9e(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103ee0(void)

{
  return;
}




void FUN_00103b91(void)

{
  return;
}




void FUN_00101c86(void)

{
  return;
}




void FUN_00102e17(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010301c(param_1,param_2,param_3);
  return;
}




undefined8 FUN_001031ae(void)

{
  return 0x1fffffffffffffff;
}




bool FUN_00103d03(pthread_t *param_1)

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




void FUN_00101c54(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




undefined8 FUN_00102cb2(undefined8 param_1)

{
  return param_1;
}




void FUN_001034d7(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  ulong local_20;
  
  piVar2 = (int *)FUN_0010360a(param_1,2);
  iVar1 = *piVar2;
  puVar3 = (undefined4 *)operator_new__((long)iVar1 << 2);
  for (local_20 = 0; local_20 < (ulong)(long)iVar1; local_20 = local_20 + 1) {
    puVar3[local_20] = 0;
  }
  FUN_00103686(*puVar3);
  if (puVar3 != (undefined4 *)0x0) {
    operator_delete__(puVar3);
  }
  return;
}




void FUN_001018ea(undefined8 param_1)

{
  FUN_00101c34(param_1);
  FUN_00101c54(param_1);
  return;
}




void FUN_001036da(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00102bfd(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102ebc(param_1,param_2,param_3);
  return;
}




void FUN_001037b0(undefined4 param_1)

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




long FUN_001023b2(long *param_1)

{
  return param_1[1] - *param_1 >> 2;
}




void FUN_001018ca(undefined8 param_1)

{
  FUN_001018aa(param_1);
  return;
}




void FUN_00102552(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102ab2(param_1,param_2,param_3);
  return;
}




void FUN_00101988(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101cd0(param_1);
  FUN_00101ce2(*param_1,param_1[1],uVar1);
  FUN_00101936(param_1);
  return;
}




void FUN_00102ebc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010306c(param_1,param_2,param_3);
  return;
}




void FUN_00103be9(void)

{
  return;
}




long FUN_00101d9b(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00102616(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00102616(param_2);
  return lVar1 - *plVar2 >> 2;
}




void FUN_00101a20(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00101d32(param_2);
  *param_1 = *puVar1;
  return;
}




void FUN_0010243c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102a22(param_1,param_3);
                    /* try { // try from 00102476 to 0010247a has its CatchHandler @ 0010247d */
  FUN_00102a58(param_1,param_2);
  return;
}




void FUN_00102b4a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102b38(param_3);
  FUN_00102e48(param_1,param_2,uVar1);
  return;
}




void FUN_00103bd3(void)

{
  return;
}




void FUN_00103dfa(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_001029f8(undefined8 param_1,undefined8 param_2)

{
  FUN_00102e04(param_1,param_2);
  return;
}




void FUN_00102ab2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102e17(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00102b38(undefined8 param_1)

{
  return param_1;
}




void FUN_00101de0(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  long *plVar3;
  long lVar4;
  long in_FS_OFFSET;
  undefined8 local_88;
  long *local_80;
  undefined8 local_78;
  long local_70;
  long local_68;
  long local_60;
  long local_58;
  undefined8 local_50;
  ulong local_48;
  long local_40;
  undefined local_38 [24];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_88 = param_2;
  local_80 = param_1;
  if (param_3 != 0) {
    if ((ulong)(param_1[2] - param_1[1] >> 2) < param_3) {
      local_68 = FUN_0010284c(param_1,param_3,"vector::_M_fill_insert");
      local_78 = FUN_00102300(local_80);
      local_60 = FUN_001026da(&local_88,&local_78);
      local_70 = FUN_0010293c(local_80,local_68);
      local_58 = local_70;
      uVar1 = FUN_00101cd0(local_80);
                    /* try { // try from 001020ea to 00102175 has its CatchHandler @ 0010222d */
      FUN_00102817(local_60 * 4 + local_58,param_3,param_4,uVar1);
      local_70 = 0;
      uVar1 = FUN_00101cd0(local_80);
      puVar2 = (undefined8 *)FUN_00101d32(&local_88);
      local_70 = FUN_00102973(*local_80,*puVar2,local_58,uVar1);
      local_70 = local_70 + param_3 * 4;
      uVar1 = FUN_00101cd0(local_80);
      lVar4 = local_80[1];
      puVar2 = (undefined8 *)FUN_00101d32(&local_88);
      local_70 = FUN_00102973(*puVar2,lVar4,local_70,uVar1);
      uVar1 = FUN_00101cd0(local_80);
      FUN_00101ce2(*local_80,local_80[1],uVar1);
      FUN_00101c96(local_80,*local_80,local_80[2] - *local_80 >> 2);
      *local_80 = local_58;
      local_80[1] = local_70;
      local_80[2] = local_68 * 4 + local_58;
    }
    else {
      FUN_00102628(local_38,param_1,param_4);
                    /* try { // try from 00101e6a to 0010203d has its CatchHandler @ 0010220f */
      local_50 = FUN_001026bc(local_38);
      local_78 = FUN_001019d0(local_80);
      local_48 = FUN_001026da(&local_78,&local_88);
      local_40 = local_80[1];
      if (param_3 < local_48) {
        uVar1 = FUN_00101cd0(local_80);
        FUN_0010271e(param_3 * -4 + local_80[1],local_80[1],local_80[1],uVar1);
        local_80[1] = param_3 * 4 + local_80[1];
        lVar4 = param_3 * -4 + local_40;
        puVar2 = (undefined8 *)FUN_00101d32(&local_88);
        FUN_00102776(*puVar2,lVar4,local_40);
        plVar3 = (long *)FUN_00101d32(&local_88);
        lVar4 = *plVar3;
        puVar2 = (undefined8 *)FUN_00101d32(&local_88);
        FUN_001027c6(*puVar2,lVar4 + param_3 * 4,local_50);
      }
      else {
        uVar1 = FUN_00101cd0(local_80);
        lVar4 = FUN_00102817(local_80[1],param_3 - local_48,local_50,uVar1);
        local_80[1] = lVar4;
        uVar1 = FUN_00101cd0(local_80);
        lVar4 = local_80[1];
        puVar2 = (undefined8 *)FUN_00101d32(&local_88);
        FUN_0010271e(*puVar2,local_40,lVar4,uVar1);
        local_80[1] = local_48 * 4 + local_80[1];
        puVar2 = (undefined8 *)FUN_00101d32(&local_88);
        FUN_001027c6(*puVar2,local_40,local_50);
      }
      FUN_00102688(local_38);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103bb2(void)

{
  return;
}




void FUN_0010375a(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_001026bc(undefined8 param_1)

{
  FUN_00102b22(param_1);
  return;
}




void FUN_00102628(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar1 = FUN_00102b38(param_3);
  uVar2 = FUN_00102b22(param_1);
  FUN_00102b4a(*param_1,uVar2,uVar1);
  return;
}




ulong FUN_0010284c(undefined8 param_1,ulong param_2,char *param_3)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  ulong uVar4;
  ulong uVar5;
  long in_FS_OFFSET;
  ulong local_48;
  undefined8 local_40;
  undefined8 local_30;
  ulong local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_48 = param_2;
  local_40 = param_1;
  lVar1 = FUN_00102d34(param_1);
  lVar2 = FUN_001023b2(local_40);
  if ((ulong)(lVar1 - lVar2) < local_48) {
    std::__throw_length_error(param_3);
  }
  lVar1 = FUN_001023b2(local_40);
  local_30 = FUN_001023b2(local_40);
  plVar3 = (long *)FUN_00102d5a(&local_30,&local_48);
  local_28 = *plVar3 + lVar1;
  uVar4 = FUN_001023b2(local_40);
  if ((local_28 < uVar4) || (uVar5 = FUN_00102d34(local_40), uVar4 = local_28, uVar5 < local_28)) {
    uVar4 = FUN_00102d34(local_40);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void * FUN_00103474(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 2;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 4);
  }
  return (void *)((long)param_3 + lVar1 * 4);
}




void FUN_001027c6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102cb2(param_2);
  uVar2 = FUN_00102cb2(param_1);
  FUN_00102cc4(uVar2,uVar1,param_3);
  return;
}




undefined8 FUN_00102616(undefined8 param_1)

{
  return param_1;
}




void FUN_00103b4f(void)

{
  return;
}




void FUN_00102776(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102c32(param_2);
  uVar2 = FUN_00102c32(param_1);
  FUN_00102c44(uVar2,uVar1,param_3);
  return;
}




void FUN_00102ef1(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010309d(param_1,param_2,param_3);
  return;
}




void FUN_00102c44(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 local_30;
  undefined8 local_28;
  undefined8 local_20;
  
  local_30 = param_3;
  local_28 = param_2;
  local_20 = param_1;
  uVar1 = FUN_00102cb2(param_3);
  uVar2 = FUN_00102cb2(local_28);
  uVar3 = FUN_00102cb2(local_20);
  uVar1 = FUN_00102ef1(uVar3,uVar2,uVar1);
  FUN_00102f26(&local_30,uVar1);
  return;
}




long FUN_001026da(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00101d32(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00101d32(param_2);
  return lVar1 - *plVar2 >> 2;
}




void FUN_00103ba7(void)

{
  return;
}




void FUN_00102973(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102db7(param_2);
  uVar2 = FUN_00102db7(param_1);
  FUN_00102bfd(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_00102fd6(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_001031ae(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 << 2);
  return;
}



