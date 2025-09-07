
undefined8 FUN_001029fa(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(undefined8 *)(param_1 + 8);
  FUN_00102af4(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




long FUN_00102bda(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00102232(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00102232(param_2);
  return lVar1 - *plVar2 >> 2;
}




void FUN_0010351c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001036c6(param_2);
  uVar2 = FUN_001036c6(param_1);
  FUN_001036d8(uVar2,uVar1,param_3);
  return;
}




void FUN_00103f2f(void)

{
  return;
}




void FUN_00102ef8(undefined8 param_1,undefined8 param_2)

{
  FUN_00103304(param_1,param_2);
  return;
}




void FUN_00102bbc(undefined8 param_1)

{
  FUN_00103022(param_1);
  return;
}




undefined8 FUN_00101d73(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_001021e2(undefined8 param_1,undefined8 param_2)

{
  FUN_00102ac9(param_1,param_2);
  return;
}




void FUN_00103f9d(void)

{
  return;
}




void FUN_00101e16(undefined8 param_1)

{
  FUN_00102186(param_1);
  return;
}




ulong * FUN_0010325a(ulong *param_1,ulong *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_00102196(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FUN_00102a97(param_1,param_2,param_3);
  }
  return;
}




void FUN_00102186(void)

{
  return;
}




bool FUN_001040ac(pthread_t *param_1)

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




void FUN_00103f71(void)

{
  return;
}




undefined8 FUN_00103fdf(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00103fa8,local_18);
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




void FUN_001041e1(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00103b2e(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101f4e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  local_20 = FUN_00102244(param_1);
  local_18 = FUN_0010229b(&local_38,&local_20);
  local_20 = FUN_00102800(local_30);
  uVar1 = FUN_0010284c(&local_20,local_18);
  FUN_001022e0(local_30,uVar1,param_3,param_4);
  local_20 = FUN_00102800(local_30);
  FUN_0010284c(&local_20,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010393f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103974(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00102232(undefined8 param_1)

{
  return param_1;
}




void FUN_00103f5b(void)

{
  return;
}




void FUN_00102d17(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001031fe(param_1,param_2,param_3);
  return;
}




void FUN_00103fa8(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_0010300f(void)

{
  return;
}




long FUN_001017ca(long *param_1,long param_2)

{
  return *param_1 + param_2 * 4;
}




void FUN_00102c1e(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001030b1(param_2);
  uVar2 = FUN_001030b1(param_1);
  FUN_001030fd(uVar2,uVar1,param_3,param_4);
  return;
}




void _FINI_0(void)

{
  if (DAT_00108028 == '\0') {
    if (PTR___cxa_finalize_00107fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00108008);
    }
    FUN_00101470();
    DAT_00108028 = 1;
    return;
  }
  return;
}




int FUN_00103ec8(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00103144(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_001031b2(param_3);
  uVar2 = FUN_001031b2(local_28);
  uVar3 = FUN_001031b2(local_20);
  uVar1 = FUN_001033f1(uVar3,uVar2,uVar1);
  FUN_00103426(&local_30,uVar1);
  return;
}




void FUN_00103b59(undefined4 param_1)

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




void FUN_00102134(undefined8 param_1)

{
  FUN_00102a88(param_1);
  return;
}




void FUN_0010339e(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00103f0e(void)

{
  return;
}




long FUN_0010359d(void *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 2;
  if (lVar1 != 0) {
    memmove((void *)(lVar1 * -4 + param_3),param_1,lVar1 * 4);
  }
  return param_3 + lVar1 * -4;
}




void FUN_00103087(undefined8 param_1,undefined8 param_2)

{
  FUN_0010338a(param_1,param_2);
  return;
}




void FUN_00103ef8(void)

{
  return;
}




void FUN_00102f22(undefined8 param_1,undefined8 param_2)

{
  FUN_00102ef8(param_1,param_2);
  FUN_00102154(param_1);
  return;
}




undefined8 FUN_00102800(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102210(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00102b16(undefined8 param_1)

{
  return param_1;
}




void FUN_00103613(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_001031b2(param_1);
  uVar1 = FUN_00103796(uVar1,param_2,param_3);
  FUN_00103426(&local_10,uVar1);
  return;
}




void FUN_00102b28(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar1 = FUN_00103038(param_3);
  uVar2 = FUN_00103022(param_1);
  FUN_0010304a(*param_1,uVar2,uVar1);
  return;
}




void FUN_00103304(void)

{
  return;
}




void FUN_00102cc6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001031b2(param_2);
  uVar2 = FUN_001031b2(param_1);
  FUN_001031c4(uVar2,uVar1,param_3);
  return;
}




void FUN_00102014(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_0010292a(param_2);
  FUN_001028d9(&local_31,uVar1);
  uVar1 = FUN_001028b2(param_2);
                    /* try { // try from 0010207a to 0010207e has its CatchHandler @ 001020e7 */
  FUN_0010293c(param_1,uVar1,&local_31);
  FUN_00101e16(&local_31);
  uVar2 = FUN_001021d0(param_1);
  uVar1 = *param_1;
  uVar3 = FUN_001029fa(param_2);
  uVar4 = FUN_001029a2(param_2);
                    /* try { // try from 001020c8 to 001020cc has its CatchHandler @ 00102105 */
  uVar1 = FUN_00102a52(uVar4,uVar3,uVar1,uVar2);
  param_1[1] = uVar1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102154(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




void FUN_0010293c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102f22(param_1,param_3);
                    /* try { // try from 00102976 to 0010297a has its CatchHandler @ 0010297d */
  FUN_00102f58(param_1,param_2);
  return;
}




void FUN_00103a57(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x001014c4) */
/* WARNING: Removing unreachable block (ram,0x001014d0) */

void FUN_001014a0(void)

{
  return;
}




void FUN_00102a52(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102fb2(param_1,param_2,param_3);
  return;
}




void FUN_00103234(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010292a(param_1);
  FUN_0010346d(uVar1);
  return;
}




void FUN_00101dca(undefined8 param_1)

{
  FUN_00101daa(param_1);
  return;
}




undefined8 FUN_0010392a(undefined8 *param_1)

{
  return *param_1;
}




void FUN_00103f7c(void)

{
  return;
}




void FUN_00101dea(undefined8 param_1)

{
  FUN_00102134(param_1);
  FUN_00102154(param_1);
  return;
}




void FUN_001017ee(void)

{
  char *pcVar1;
  long in_FS_OFFSET;
  int local_74;
  undefined8 local_70;
  undefined local_68 [32];
  undefined8 local_48 [3];
  char local_2e [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101dca(local_68);
  local_74 = -1;
  local_2e[0] = '\0';
  local_2e[1] = '\0';
  local_2e[2] = '\0';
  local_2e[3] = '\0';
  local_2e[4] = '\0';
  local_2e[5] = '\0';
  local_2e[6] = '\0';
  local_2e[7] = '\0';
  local_2e[8] = '\0';
  local_2e[9] = '\0';
  local_2e[10] = '\0';
  local_2e[0xb] = '\0';
  local_2e[0xc] = '\0';
  local_2e[0xd] = '\0';
                    /* try { // try from 00101845 to 00101940 has its CatchHandler @ 0010198c */
  pcVar1 = fgets(local_2e,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    FUN_001039d7("fgets() failed.");
  }
  else {
    local_74 = atoi(local_2e);
  }
  local_70 = FUN_00101ed0(local_68);
  FUN_00101f20(local_48,&local_70);
  FUN_00101f4e(local_68,local_48[0],1,&local_74);
  local_70 = FUN_00101ed0(local_68);
  FUN_00101f20(local_48,&local_70);
  FUN_00101f4e(local_68,local_48[0],1,&local_74);
  local_70 = FUN_00101ed0(local_68);
  FUN_00101f20(local_48,&local_70);
  FUN_00101f4e(local_68,local_48[0],1,&local_74);
  FUN_00102014(local_48,local_68);
                    /* try { // try from 00101948 to 0010194c has its CatchHandler @ 00101977 */
  FUN_00101529(local_48);
  FUN_00101e88(local_48);
  FUN_00101e88(local_68);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined4 * FUN_00103796(undefined4 *param_1,long param_2,undefined4 *param_3)

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




void FUN_00101e36(long *param_1)

{
  FUN_00102196(param_1,*param_1,param_1[2] - *param_1 >> 2);
  FUN_00101d8a(param_1);
  return;
}




undefined8 FUN_0010346d(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0x1fffffffffffffff;
  local_18 = FUN_00103661(param_1);
  puVar1 = (undefined8 *)FUN_0010367f(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}




undefined8 FUN_00102ecb(undefined8 param_1,undefined8 param_2)

{
  FUN_00102ef8(param_1,param_2);
  return param_1;
}




void FUN_00102f58(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_00102e3c(param_1,param_2);
  *param_1 = lVar1;
  param_1[1] = *param_1;
  param_1[2] = param_2 * 4 + *param_1;
  return;
}




void FUN_00103f03(void)

{
  return;
}




undefined8 FUN_0010284c(long *param_1,long param_2)

{
  long in_FS_OFFSET;
  long local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1 + param_2 * 4;
  FUN_00102210(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001036d8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_001031b2(param_3);
  uVar2 = FUN_001037dd(local_28);
  uVar3 = FUN_001037dd(local_20);
  uVar1 = FUN_001037fe(uVar3,uVar2,uVar1);
  FUN_00103426(&local_30,uVar1);
  return;
}




void FUN_00103f19(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101483) */
/* WARNING: Removing unreachable block (ram,0x0010148f) */

void FUN_00101470(void)

{
  return;
}




void FUN_00102c76(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103132(param_2);
  uVar2 = FUN_00103132(param_1);
  FUN_00103144(uVar2,uVar1,param_3);
  return;
}




void FUN_001041c2(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00103eed(void)

{
  return;
}




void FUN_00101d8a(undefined8 param_1)

{
  FUN_00101e16(param_1);
  return;
}




void FUN_00103a83(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_001033bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010356c(param_1,param_2,param_3);
  return;
}




void FUN_00103c34(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




undefined8 FUN_001021d0(undefined8 param_1)

{
  return param_1;
}




void FUN_001019b6(void)

{
  long in_FS_OFFSET;
  undefined4 local_64;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101dca(local_58);
  local_64 = 7;
  local_60 = FUN_00101ed0(local_58);
  FUN_00101f20(local_38,&local_60);
                    /* try { // try from 00101a26 to 00101abb has its CatchHandler @ 00101b07 */
  FUN_00101f4e(local_58,local_38[0],1,&local_64);
  local_60 = FUN_00101ed0(local_58);
  FUN_00101f20(local_38,&local_60);
  FUN_00101f4e(local_58,local_38[0],1,&local_64);
  local_60 = FUN_00101ed0(local_58);
  FUN_00101f20(local_38,&local_60);
  FUN_00101f4e(local_58,local_38[0],1,&local_64);
  FUN_00102014(local_38,local_58);
                    /* try { // try from 00101ac3 to 00101ac7 has its CatchHandler @ 00101af2 */
  FUN_00101606(local_38);
  FUN_00101e88(local_38);
  FUN_00101e88(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103661(undefined8 param_1)

{
  FUN_001036ae(param_1);
  return;
}




undefined8 FUN_00102244(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_00102af4(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00104280(void)

{
  return;
}




ulong FUN_00102d4c(undefined8 param_1,ulong param_2,char *param_3)

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
  lVar1 = FUN_00103234(param_1);
  lVar2 = FUN_001028b2(local_40);
  if ((ulong)(lVar1 - lVar2) < local_48) {
    std::__throw_length_error(param_3);
  }
  lVar1 = FUN_001028b2(local_40);
  local_30 = FUN_001028b2(local_40);
  plVar3 = (long *)FUN_0010325a(&local_30,&local_48);
  local_28 = *plVar3 + lVar1;
  uVar4 = FUN_001028b2(local_40);
  if ((local_28 < uVar4) || (uVar5 = FUN_00103234(local_40), uVar4 = local_28, uVar5 < local_28)) {
    uVar4 = FUN_00103234(local_40);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00102a97(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102fe8(param_1,param_2,param_3);
  return;
}




undefined8 FUN_0010292a(undefined8 param_1)

{
  return param_1;
}




void FUN_0010338a(void)

{
  return;
}




void FUN_00103f66(void)

{
  return;
}




void FUN_001030fd(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001033bc(param_1,param_2,param_3);
  return;
}




undefined8 FUN_0010412a(undefined8 *param_1)

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




undefined8 FUN_00101ed0(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102210(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00101d0e(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001039d7("Calling good()...");
  FUN_00101cf9();
  FUN_001039d7("Finished good()");
  FUN_001039d7("Calling bad()...");
  FUN_001017ee();
  FUN_001039d7("Finished bad()");
  return 0;
}




void FUN_001033f1(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010359d(param_1,param_2,param_3);
  return;
}




void FUN_00102af4(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00103c06(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_001041a3(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




undefined8 FUN_001036c6(undefined8 param_1)

{
  return param_1;
}




void FUN_001031c4(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *local_20;
  
  uVar1 = *param_3;
  for (local_20 = param_1; local_20 != param_2; local_20 = local_20 + 1) {
    *local_20 = uVar1;
  }
  return;
}




void FUN_00103859(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_001031b2(param_3);
  uVar2 = FUN_001031b2(local_28);
  uVar3 = FUN_001031b2(local_20);
  uVar1 = FUN_0010393f(uVar3,uVar2,uVar1);
  FUN_00103426(&local_30,uVar1);
  return;
}




void FUN_00102fb2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103317(param_1,param_2,param_3);
  return;
}




ulong * FUN_0010367f(ulong *param_1,ulong *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}




long FUN_001028b2(long *param_1)

{
  return param_1[1] - *param_1 >> 2;
}




void FUN_00101529(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  void *__ptr;
  int local_18;
  
  piVar2 = (int *)FUN_001017ca(param_1,2);
  iVar1 = *piVar2;
  __ptr = malloc(0x28);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
    *(undefined4 *)((long)__ptr + (long)local_18 * 4) = 0;
  }
  if (iVar1 < 0) {
    FUN_001039d7("ERROR: Array index is negative.");
  }
  else {
    *(undefined4 *)((long)__ptr + (long)iVar1 * 4) = 1;
    for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
      FUN_00103a2f(*(undefined4 *)((long)__ptr + (long)local_18 * 4));
    }
  }
  free(__ptr);
  return;
}




void FUN_00101e88(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001021d0(param_1);
  FUN_001021e2(*param_1,param_1[1],uVar1);
  FUN_00101e36(param_1);
  return;
}




void FUN_00102b88(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103022(param_1);
  FUN_00103087(*param_1,uVar1);
  return;
}




void FUN_00103aad(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00103a2f(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




undefined8 FUN_00103426(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00103f87(void)

{
  return;
}




void FUN_001034d6(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_001036ae(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 << 2);
  return;
}




void FUN_00104210(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




undefined8 FUN_001036ae(void)

{
  return 0x1fffffffffffffff;
}




void FUN_00103f45(void)

{
  return;
}




undefined8 FUN_00103eaa(void)

{
  return 1;
}




void FUN_00103317(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010351c(param_1,param_2,param_3);
  return;
}




void FUN_00102210(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00103ee2(void)

{
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00107ed0)();
  return;
}




void FUN_0010304a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103038(param_3);
  FUN_00103348(param_1,param_2,uVar1);
  return;
}




undefined8 FUN_001037dd(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  puVar1 = (undefined8 *)FUN_00102b16(&local_10);
  return *puVar1;
}




void FUN_00103bb3(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




undefined8 FUN_001031b2(undefined8 param_1)

{
  return param_1;
}




void FUN_00101606(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  void *__ptr;
  int local_18;
  
  piVar2 = (int *)FUN_001017ca(param_1,2);
  iVar1 = *piVar2;
  __ptr = malloc(0x28);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
    *(undefined4 *)((long)__ptr + (long)local_18 * 4) = 0;
  }
  if (iVar1 < 0) {
    FUN_001039d7("ERROR: Array index is negative.");
  }
  else {
    *(undefined4 *)((long)__ptr + (long)iVar1 * 4) = 1;
    for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
      FUN_00103a2f(*(undefined4 *)((long)__ptr + (long)local_18 * 4));
    }
  }
  free(__ptr);
  return;
}




void FUN_00103f24(void)

{
  return;
}




void FUN_001039fd(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




ulong FUN_00103cc7(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_00105108,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00102e3c(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00103289(param_1,param_2);
  }
  return uVar1;
}




undefined8 FUN_001028d9(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102ecb(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




undefined8 FUN_001032b7(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010339e(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103f3a(void)

{
  return;
}




void FUN_00103348(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)FUN_00103038(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined4 *)FUN_00101d73(4,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_00102fe8(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_001031fe(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010343c(param_1,param_2,param_3);
  return;
}




void FUN_001016e3(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  void *__ptr;
  int local_18;
  
  piVar2 = (int *)FUN_001017ca(param_1,2);
  iVar1 = *piVar2;
  __ptr = malloc(0x28);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
    *(undefined4 *)((long)__ptr + (long)local_18 * 4) = 0;
  }
  if ((iVar1 < 0) || (9 < iVar1)) {
    FUN_001039d7("ERROR: Array index is out-of-bounds");
  }
  else {
    *(undefined4 *)((long)__ptr + (long)iVar1 * 4) = 1;
    for (local_18 = 0; local_18 < 10; local_18 = local_18 + 1) {
      FUN_00103a2f(*(undefined4 *)((long)__ptr + (long)local_18 * 4));
    }
  }
  free(__ptr);
  return;
}




void FUN_00101f20(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102232(param_2);
  *param_1 = *puVar1;
  return;
}




undefined8 FUN_00104107(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_001022e0(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

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
      local_68 = FUN_00102d4c(param_1,param_3,"vector::_M_fill_insert");
      local_78 = FUN_00102800(local_80);
      local_60 = FUN_00102bda(&local_88,&local_78);
      local_70 = FUN_00102e3c(local_80,local_68);
      local_58 = local_70;
      uVar1 = FUN_001021d0(local_80);
                    /* try { // try from 001025ea to 00102675 has its CatchHandler @ 0010272d */
      FUN_00102d17(local_60 * 4 + local_58,param_3,param_4,uVar1);
      local_70 = 0;
      uVar1 = FUN_001021d0(local_80);
      puVar2 = (undefined8 *)FUN_00102232(&local_88);
      local_70 = FUN_00102e73(*local_80,*puVar2,local_58,uVar1);
      local_70 = local_70 + param_3 * 4;
      uVar1 = FUN_001021d0(local_80);
      lVar4 = local_80[1];
      puVar2 = (undefined8 *)FUN_00102232(&local_88);
      local_70 = FUN_00102e73(*puVar2,lVar4,local_70,uVar1);
      uVar1 = FUN_001021d0(local_80);
      FUN_001021e2(*local_80,local_80[1],uVar1);
      FUN_00102196(local_80,*local_80,local_80[2] - *local_80 >> 2);
      *local_80 = local_58;
      local_80[1] = local_70;
      local_80[2] = local_68 * 4 + local_58;
    }
    else {
      FUN_00102b28(local_38,param_1,param_4);
                    /* try { // try from 0010236a to 0010253d has its CatchHandler @ 0010270f */
      local_50 = FUN_00102bbc(local_38);
      local_78 = FUN_00101ed0(local_80);
      local_48 = FUN_00102bda(&local_78,&local_88);
      local_40 = local_80[1];
      if (param_3 < local_48) {
        uVar1 = FUN_001021d0(local_80);
        FUN_00102c1e(param_3 * -4 + local_80[1],local_80[1],local_80[1],uVar1);
        local_80[1] = param_3 * 4 + local_80[1];
        lVar4 = param_3 * -4 + local_40;
        puVar2 = (undefined8 *)FUN_00102232(&local_88);
        FUN_00102c76(*puVar2,lVar4,local_40);
        plVar3 = (long *)FUN_00102232(&local_88);
        lVar4 = *plVar3;
        puVar2 = (undefined8 *)FUN_00102232(&local_88);
        FUN_00102cc6(*puVar2,lVar4 + param_3 * 4,local_50);
      }
      else {
        uVar1 = FUN_001021d0(local_80);
        lVar4 = FUN_00102d17(local_80[1],param_3 - local_48,local_50,uVar1);
        local_80[1] = lVar4;
        uVar1 = FUN_001021d0(local_80);
        lVar4 = local_80[1];
        puVar2 = (undefined8 *)FUN_00102232(&local_88);
        FUN_00102c1e(*puVar2,local_40,lVar4,uVar1);
        local_80[1] = local_48 * 4 + local_80[1];
        puVar2 = (undefined8 *)FUN_00102232(&local_88);
        FUN_00102cc6(*puVar2,local_40,local_50);
      }
      FUN_00102b88(local_38);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103ad8(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00103c67(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




undefined8 FUN_001029a2(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_00102af4(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00103eb9(void)

{
  return 0;
}




void FUN_00103f50(void)

{
  return;
}




void FUN_00102ac9(undefined8 param_1,undefined8 param_2)

{
  FUN_0010300f(param_1,param_2);
  return;
}




void FUN_00101b31(void)

{
  char *pcVar1;
  long in_FS_OFFSET;
  int local_74;
  undefined8 local_70;
  undefined local_68 [32];
  undefined8 local_48 [3];
  char local_2e [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101dca(local_68);
  local_74 = -1;
  local_2e[0] = '\0';
  local_2e[1] = '\0';
  local_2e[2] = '\0';
  local_2e[3] = '\0';
  local_2e[4] = '\0';
  local_2e[5] = '\0';
  local_2e[6] = '\0';
  local_2e[7] = '\0';
  local_2e[8] = '\0';
  local_2e[9] = '\0';
  local_2e[10] = '\0';
  local_2e[0xb] = '\0';
  local_2e[0xc] = '\0';
  local_2e[0xd] = '\0';
                    /* try { // try from 00101b88 to 00101c83 has its CatchHandler @ 00101ccf */
  pcVar1 = fgets(local_2e,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    FUN_001039d7("fgets() failed.");
  }
  else {
    local_74 = atoi(local_2e);
  }
  local_70 = FUN_00101ed0(local_68);
  FUN_00101f20(local_48,&local_70);
  FUN_00101f4e(local_68,local_48[0],1,&local_74);
  local_70 = FUN_00101ed0(local_68);
  FUN_00101f20(local_48,&local_70);
  FUN_00101f4e(local_68,local_48[0],1,&local_74);
  local_70 = FUN_00101ed0(local_68);
  FUN_00101f20(local_48,&local_70);
  FUN_00101f4e(local_68,local_48[0],1,&local_74);
  FUN_00102014(local_48,local_68);
                    /* try { // try from 00101c8b to 00101c8f has its CatchHandler @ 00101cba */
  FUN_001016e3(local_48);
  FUN_00101e88(local_48);
  FUN_00101e88(local_68);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00103132(undefined8 param_1)

{
  return param_1;
}




void FUN_00103b03(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void * FUN_001038c7(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 2;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 4);
  }
  return (void *)((long)param_3 + lVar1 * 4);
}




void FUN_00103746(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103833(param_2);
  uVar2 = FUN_00103833(param_1);
  FUN_00103859(uVar2,uVar1,param_3);
  return;
}




void FUN_00103f92(void)

{
  return;
}




undefined8 FUN_001030b1(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010339e(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103833(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_0010392a(&local_10);
  FUN_00103132(uVar1);
  return;
}




void FUN_00103289(undefined8 param_1,undefined8 param_2)

{
  FUN_001034d6(param_1,param_2,0);
  return;
}




undefined8 FUN_00103038(undefined8 param_1)

{
  return param_1;
}




void FUN_00102a88(void)

{
  return;
}




void FUN_0010356c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103746(param_1,param_2,param_3);
  return;
}




void FUN_00103bdb(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_001037fe(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001038c7(param_1,param_2,param_3);
  return;
}




void FUN_001039d7(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




long FUN_0010229b(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00102b16(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00102b16(param_2);
  return lVar1 - *plVar2 >> 2;
}




ulong FUN_00103dcb(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_00105110,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void * FUN_00103974(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 2;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 4);
  }
  return (void *)((long)param_3 + lVar1 * 4);
}




void FUN_00102e73(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001032b7(param_2);
  uVar2 = FUN_001032b7(param_1);
  FUN_001030fd(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_00101cf9(void)

{
  FUN_001019b6();
  FUN_00101b31();
  return;
}




long FUN_00103022(long param_1)

{
  return param_1 + 8;
}




void FUN_0010343c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103613(param_1,param_2,param_3);
  return;
}




void FUN_00101daa(undefined8 param_1)

{
  FUN_00101dea(param_1);
  return;
}



