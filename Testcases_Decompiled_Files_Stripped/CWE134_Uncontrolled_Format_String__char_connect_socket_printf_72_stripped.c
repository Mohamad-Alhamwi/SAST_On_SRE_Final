
undefined8 FUN_00103be5(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001041d7(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




undefined8 FUN_001054f0(void *param_1)

{
  free(param_1);
  return 1;
}




undefined8 FUN_00103e22(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00104738(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




int FUN_001052b1(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




ulong FUN_00104058(undefined8 param_1,ulong param_2,char *param_3)

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
  lVar1 = FUN_00104544(param_1);
  lVar2 = FUN_00103bbe(local_40);
  if ((ulong)(lVar1 - lVar2) < local_48) {
    std::__throw_length_error(param_3);
  }
  lVar1 = FUN_00103bbe(local_40);
  local_30 = FUN_00103bbe(local_40);
  plVar3 = (long *)FUN_0010456a(&local_30,&local_48);
  local_28 = *plVar3 + lVar1;
  uVar4 = FUN_00103bbe(local_40);
  if ((local_28 < uVar4) || (uVar5 = FUN_00104544(local_40), uVar4 = local_28, uVar5 < local_28)) {
    uVar4 = FUN_00104544(local_40);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00103e00(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_001025e9(void)

{
  int __fd;
  int iVar1;
  ssize_t sVar2;
  long in_FS_OFFSET;
  char *local_f8;
  undefined8 local_f0;
  size_t local_e8;
  char *local_e0;
  undefined local_d8 [32];
  undefined8 local_b8 [4];
  sockaddr local_98;
  char local_88 [104];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001030d6(local_d8);
  local_88[0] = '\0';
  local_88[1] = '\0';
  local_88[2] = '\0';
  local_88[3] = '\0';
  local_88[4] = '\0';
  local_88[5] = '\0';
  local_88[6] = '\0';
  local_88[7] = '\0';
  local_88[8] = '\0';
  local_88[9] = '\0';
  local_88[10] = '\0';
  local_88[0xb] = '\0';
  local_88[0xc] = '\0';
  local_88[0xd] = '\0';
  local_88[0xe] = '\0';
  local_88[0xf] = '\0';
  local_88[0x10] = '\0';
  local_88[0x11] = '\0';
  local_88[0x12] = '\0';
  local_88[0x13] = '\0';
  local_88[0x14] = '\0';
  local_88[0x15] = '\0';
  local_88[0x16] = '\0';
  local_88[0x17] = '\0';
  local_88[0x18] = '\0';
  local_88[0x19] = '\0';
  local_88[0x1a] = '\0';
  local_88[0x1b] = '\0';
  local_88[0x1c] = '\0';
  local_88[0x1d] = '\0';
  local_88[0x1e] = '\0';
  local_88[0x1f] = '\0';
  local_88[0x20] = '\0';
  local_88[0x21] = '\0';
  local_88[0x22] = '\0';
  local_88[0x23] = '\0';
  local_88[0x24] = '\0';
  local_88[0x25] = '\0';
  local_88[0x26] = '\0';
  local_88[0x27] = '\0';
  local_88[0x28] = '\0';
  local_88[0x29] = '\0';
  local_88[0x2a] = '\0';
  local_88[0x2b] = '\0';
  local_88[0x2c] = '\0';
  local_88[0x2d] = '\0';
  local_88[0x2e] = '\0';
  local_88[0x2f] = '\0';
  local_88[0x30] = '\0';
  local_88[0x31] = '\0';
  local_88[0x32] = '\0';
  local_88[0x33] = '\0';
  local_88[0x34] = '\0';
  local_88[0x35] = '\0';
  local_88[0x36] = '\0';
  local_88[0x37] = '\0';
  local_88[0x38] = '\0';
  local_88[0x39] = '\0';
  local_88[0x3a] = '\0';
  local_88[0x3b] = '\0';
  local_88[0x3c] = '\0';
  local_88[0x3d] = '\0';
  local_88[0x3e] = '\0';
  local_88[0x3f] = '\0';
  local_88[0x40] = '\0';
  local_88[0x41] = '\0';
  local_88[0x42] = '\0';
  local_88[0x43] = '\0';
  local_88[0x44] = '\0';
  local_88[0x45] = '\0';
  local_88[0x46] = '\0';
  local_88[0x47] = '\0';
  local_88[0x48] = '\0';
  local_88[0x49] = '\0';
  local_88[0x4a] = '\0';
  local_88[0x4b] = '\0';
  local_88[0x4c] = '\0';
  local_88[0x4d] = '\0';
  local_88[0x4e] = '\0';
  local_88[0x4f] = '\0';
  local_88[0x50] = '\0';
  local_88[0x51] = '\0';
  local_88[0x52] = '\0';
  local_88[0x53] = '\0';
  local_88[0x54] = '\0';
  local_88[0x55] = '\0';
  local_88[0x56] = '\0';
  local_88[0x57] = '\0';
  local_88[0x58] = '\0';
  local_88[0x59] = '\0';
  local_88[0x5a] = '\0';
  local_88[0x5b] = '\0';
  local_88[0x5c] = '\0';
  local_88[0x5d] = '\0';
  local_88[0x5e] = '\0';
  local_88[0x5f] = '\0';
  local_88[0x60] = '\0';
  local_88[0x61] = '\0';
  local_88[0x62] = '\0';
  local_88[99] = '\0';
  local_f8 = local_88;
  local_e8 = strlen(local_f8);
  __fd = socket(2,1,6);
  if (__fd != -1) {
    memset(&local_98,0,0x10);
    local_98.sa_family = 2;
    local_98.sa_data._2_4_ = inet_addr("127.0.0.1");
    local_98.sa_data._0_2_ = htons(0x6987);
                    /* try { // try from 0010272c to 00102940 has its CatchHandler @ 00102998 */
    iVar1 = connect(__fd,&local_98,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(__fd,local_f8 + local_e8,99 - local_e8,0);
      iVar1 = (int)sVar2;
      if ((iVar1 != -1) && (iVar1 != 0)) {
        local_f8[local_e8 + (long)iVar1] = '\0';
        local_e0 = strchr(local_f8,0xd);
        if (local_e0 != (char *)0x0) {
          *local_e0 = '\0';
        }
        local_e0 = strchr(local_f8,10);
        if (local_e0 != (char *)0x0) {
          *local_e0 = '\0';
        }
      }
    }
  }
  if (__fd != -1) {
    close(__fd);
  }
  local_f0 = FUN_001031dc(local_d8);
  FUN_0010322c(local_b8,&local_f0);
  FUN_0010325a(local_d8,local_b8[0],1,&local_f8);
  local_f0 = FUN_001031dc(local_d8);
  FUN_0010322c(local_b8,&local_f0);
  FUN_0010325a(local_d8,local_b8[0],1,&local_f8);
  local_f0 = FUN_001031dc(local_d8);
  FUN_0010322c(local_b8,&local_f0);
  FUN_0010325a(local_d8,local_b8[0],1,&local_f8);
  FUN_00103320(local_b8,local_d8);
                    /* try { // try from 0010294b to 0010294f has its CatchHandler @ 00102980 */
  FUN_00104ced(local_b8);
  FUN_00103194(local_b8);
  FUN_00103194(local_d8);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00103460(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




void FUN_0010532e(void)

{
  return;
}




undefined8 FUN_001044be(undefined8 param_1)

{
  return param_1;
}




void FUN_00103096(undefined8 param_1)

{
  FUN_00103122(param_1);
  return;
}




void FUN_00103320(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00103c36(param_2);
  FUN_00103be5(&local_31,uVar1);
  uVar1 = FUN_00103bbe(param_2);
                    /* try { // try from 00103386 to 0010338a has its CatchHandler @ 001033f3 */
  FUN_00103c48(param_1,uVar1,&local_31);
  FUN_00103122(&local_31);
  uVar2 = FUN_001034dc(param_1);
  uVar1 = *param_1;
  uVar3 = FUN_00103d06(param_2);
  uVar4 = FUN_00103cae(param_2);
                    /* try { // try from 001033d4 to 001033d8 has its CatchHandler @ 00103411 */
  uVar1 = FUN_00103d5e(uVar4,uVar3,uVar1,uVar2);
  param_1[1] = uVar1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010325a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  local_20 = FUN_00103550(param_1);
  local_18 = FUN_001035a7(&local_38,&local_20);
  local_20 = FUN_00103b0c(local_30);
  uVar1 = FUN_00103b58(&local_20,local_18);
  FUN_001035ec(local_30,uVar1,param_3,param_4);
  local_20 = FUN_00103b0c(local_30);
  FUN_00103b58(&local_20,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010534f(void)

{
  return;
}




void FUN_00105302(void)

{
  return;
}




void FUN_00105344(void)

{
  return;
}




void FUN_00105386(void)

{
  return;
}




void FUN_00104dc0(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00103142(long *param_1)

{
  FUN_001034a2(param_1,*param_1,param_1[2] - *param_1 >> 3);
  FUN_00103096(param_1);
  return;
}




void FUN_00104b49(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00104c40(&local_10);
  FUN_0010443e(uVar1);
  return;
}




undefined8 FUN_00105513(undefined8 *param_1)

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




void FUN_001034a2(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FUN_00103da3(param_1,param_2,param_3);
  }
  return;
}




void FUN_001052ec(void)

{
  return;
}




long FUN_00103ee6(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_0010353e(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_0010353e(param_2);
  return lVar1 - *plVar2 >> 3;
}




void FUN_00105339(void)

{
  return;
}




void FUN_0010422e(undefined8 param_1,undefined8 param_2)

{
  FUN_00104204(param_1,param_2);
  FUN_00103460(param_1);
  return;
}




void FUN_00103e34(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar1 = FUN_00104344(param_3);
  uVar2 = FUN_0010432e(param_1);
  FUN_00104356(*param_1,uVar2,uVar1);
  return;
}




void FUN_00104fc4(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00104393(undefined8 param_1,undefined8 param_2)

{
  FUN_0010469c(param_1,param_2);
  return;
}




void FUN_00104de6(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




undefined8 FUN_001031dc(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010351c(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00104614(void)

{
  return;
}




ulong FUN_001051b4(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001060bc,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_0010477f(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0xfffffffffffffff;
  local_18 = FUN_00104973(param_1);
  puVar1 = (undefined8 *)FUN_00104991(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}




void FUN_0010558c(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_0010431b(void)

{
  return;
}




void FUN_00105050(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




undefined8 FUN_00104148(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00104599(param_1,param_2);
  }
  return uVar1;
}




undefined8 FUN_0010353e(undefined8 param_1)

{
  return param_1;
}




void FUN_00105600(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00103d94(void)

{
  return;
}




void FUN_001047e8(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_001049c0(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 << 3);
  return;
}




void FUN_00103da3(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001042f4(param_1,param_2,param_3);
  return;
}




void FUN_00104544(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103c36(param_1);
  FUN_0010477f(uVar1);
  return;
}




void FUN_00103ec8(undefined8 param_1)

{
  FUN_0010432e(param_1);
  return;
}




void FUN_001055ca(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00103194(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001034dc(param_1);
  FUN_001034ee(*param_1,param_1[1],uVar1);
  FUN_00103142(param_1);
  return;
}




void FUN_0010322c(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_0010353e(param_2);
  *param_1 = *puVar1;
  return;
}




undefined8 FUN_00103b58(long *param_1,long param_2)

{
  long in_FS_OFFSET;
  long local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1 + param_2 * 8;
  FUN_0010351c(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void * FUN_00104c8a(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




undefined8 FUN_00103c36(undefined8 param_1)

{
  return param_1;
}




void FUN_00104450(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_001044be(param_3);
  uVar2 = FUN_001044be(local_28);
  uVar3 = FUN_001044be(local_20);
  uVar1 = FUN_00104703(uVar3,uVar2,uVar1);
  FUN_00104738(&local_30,uVar1);
  return;
}




void FUN_00103005(void)

{
  FUN_001029c8();
  FUN_00102c26();
  return;
}




void FUN_00104b14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00104bdd(param_1,param_2,param_3);
  return;
}




bool FUN_00105495(pthread_t *param_1)

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




void FUN_0010530d(void)

{
  return;
}




void FUN_001055ab(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




undefined8 FUN_0010301a(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00104dc0("Calling good()...");
  FUN_00103005();
  FUN_00104dc0("Finished good()");
  FUN_00104dc0("Calling bad()...");
  FUN_001025e9();
  FUN_00104dc0("Finished bad()");
  return 0;
}




void FUN_00102020(void)

{
  (*(code *)PTR_00108ea0)();
  return;
}




undefined8 FUN_001049c0(void)

{
  return 0xfffffffffffffff;
}




void FUN_001030b6(undefined8 param_1)

{
  FUN_001030f6(param_1);
  return;
}




void FUN_001046ce(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010487e(param_1,param_2,param_3);
  return;
}




void FUN_00104023(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010450e(param_1,param_2,param_3);
  return;
}




void FUN_0010417f(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001045c7(param_2);
  uVar2 = FUN_001045c7(param_1);
  FUN_00104409(uVar2,uVar1,param_3,param_4);
  return;
}




ulong FUN_001050b0(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001060b4,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00103550(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_00103e00(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00104973(undefined8 param_1)

{
  FUN_001049c0(param_1);
  return;
}




undefined8 FUN_00105293(void)

{
  return 1;
}




void FUN_00103e94(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010432e(param_1);
  FUN_00104393(*param_1,uVar1);
  return;
}




void FUN_0010537b(void)

{
  return;
}




void FUN_0010501d(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_001029c8(void)

{
  long in_FS_OFFSET;
  undefined8 *local_d8;
  undefined8 local_d0;
  undefined local_c8 [32];
  undefined8 local_a8 [4];
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 local_68;
  undefined8 local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38;
  undefined8 local_30;
  undefined4 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001030d6(local_c8);
  local_78 = 0;
  local_70 = 0;
  local_68 = 0;
  local_60 = 0;
  local_58 = 0;
  local_50 = 0;
  local_48 = 0;
  local_40 = 0;
  local_38 = 0;
  local_30 = 0;
  local_28 = 0;
  local_d8 = &local_88;
  local_88 = 0x7274736465786966;
  local_80 = 0x74736574676e69;
  local_d0 = FUN_001031dc(local_c8);
  FUN_0010322c(local_a8,&local_d0);
                    /* try { // try from 00102ad9 to 00102b9e has its CatchHandler @ 00102bf6 */
  FUN_0010325a(local_c8,local_a8[0],1,&local_d8);
  local_d0 = FUN_001031dc(local_c8);
  FUN_0010322c(local_a8,&local_d0);
  FUN_0010325a(local_c8,local_a8[0],1,&local_d8);
  local_d0 = FUN_001031dc(local_c8);
  FUN_0010322c(local_a8,&local_d0);
  FUN_0010325a(local_c8,local_a8[0],1,&local_d8);
  FUN_00103320(local_a8,local_c8);
                    /* try { // try from 00102ba9 to 00102bad has its CatchHandler @ 00102bde */
  FUN_00104d29(local_a8);
  FUN_00103194(local_a8);
  FUN_00103194(local_c8);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00104ced(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00104d9c(param_1,2);
  printf((char *)*puVar1);
  return;
}




void FUN_00104627(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010482e(param_1,param_2,param_3);
  return;
}




void FUN_00104e96(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00103440(undefined8 param_1)

{
  FUN_00103d94(param_1);
  return;
}




void FUN_0010482e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001049d8(param_2);
  uVar2 = FUN_001049d8(param_1);
  FUN_001049ea(uVar2,uVar1,param_3);
  return;
}




undefined8 FUN_001034dc(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001053c8(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00105391,local_18);
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




void FUN_00103f2a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001043bd(param_2);
  uVar2 = FUN_001043bd(param_1);
  FUN_00104409(uVar2,uVar1,param_3,param_4);
  return;
}




undefined8 FUN_00103cae(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_00103e00(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00103b0c(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010351c(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_001045c7(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001046b0(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001052f7(void)

{
  return;
}




undefined8 FUN_00104344(undefined8 param_1)

{
  return param_1;
}




void FUN_00105365(void)

{
  return;
}




void FUN_001030f6(undefined8 param_1)

{
  FUN_00103440(param_1);
  FUN_00103460(param_1);
  return;
}




void _FINI_0(void)

{
  if (DAT_00109020 == '\0') {
    if (PTR___cxa_finalize_00108fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00109008);
    }
    FUN_00102530();
    DAT_00109020 = 1;
    return;
  }
  return;
}




void FUN_00104658(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00104344(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_0010307f(8,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_00103d5e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001042be(param_1,param_2,param_3);
  return;
}




void FUN_00104e6c(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00105370(void)

{
  return;
}




void FUN_00104925(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_001044be(param_1);
  uVar1 = FUN_00104aa8(uVar1,param_2,param_3);
  FUN_00104738(&local_10,uVar1);
  return;
}




void FUN_00104409(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001046ce(param_1,param_2,param_3);
  return;
}




undefined8 * FUN_00104aa8(undefined8 *param_1,long param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *local_20;
  long local_18;
  
  uVar1 = *param_3;
  local_20 = param_1;
  for (local_18 = param_2; local_18 != 0; local_18 = local_18 + -1) {
    *local_20 = uVar1;
    local_20 = local_20 + 1;
  }
  return local_20;
}




undefined8 FUN_001041d7(undefined8 param_1,undefined8 param_2)

{
  FUN_00104204(param_1,param_2);
  return param_1;
}




void FUN_0010487e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00104a58(param_1,param_2,param_3);
  return;
}




long FUN_001035a7(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00103e22(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00103e22(param_2);
  return lVar1 - *plVar2 >> 3;
}




void FUN_001030d6(undefined8 param_1)

{
  FUN_001030b6(param_1);
  return;
}




void FUN_00103dd5(undefined8 param_1,undefined8 param_2)

{
  FUN_0010431b(param_1,param_2);
  return;
}




void FUN_00104d29(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00104d9c(param_1,2);
  printf((char *)*puVar1);
  return;
}




void FUN_00104c55(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00104c8a(param_1,param_2,param_3);
  return;
}




void FUN_0010469c(void)

{
  return;
}




void FUN_00105318(void)

{
  return;
}




void FUN_00104703(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001048af(param_1,param_2,param_3);
  return;
}




void FUN_00105391(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




long FUN_001048af(void *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove((void *)(lVar1 * -8 + param_3),param_1,lVar1 * 8);
  }
  return param_3 + lVar1 * -8;
}




void FUN_001052d6(void)

{
  return;
}




void FUN_00104f42(undefined4 param_1)

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




ulong * FUN_0010456a(ulong *param_1,ulong *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_00103492(void)

{
  return;
}




void FUN_00104fef(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_001042f4(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




undefined8 FUN_001049d8(undefined8 param_1)

{
  return param_1;
}




void FUN_00104e18(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




undefined8 FUN_001043bd(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001046b0(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_001052a2(void)

{
  return 0;
}




undefined8 FUN_00104c40(undefined8 *param_1)

{
  return *param_1;
}




void FUN_00104eec(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00103f82(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010443e(param_2);
  uVar2 = FUN_0010443e(param_1);
  FUN_00104450(uVar2,uVar1,param_3);
  return;
}




void FUN_001035ec(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

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
    if ((ulong)(param_1[2] - param_1[1] >> 3) < param_3) {
      local_68 = FUN_00104058(param_1,param_3,"vector::_M_fill_insert");
      local_78 = FUN_00103b0c(local_80);
      local_60 = FUN_00103ee6(&local_88,&local_78);
      local_70 = FUN_00104148(local_80,local_68);
      local_58 = local_70;
      uVar1 = FUN_001034dc(local_80);
                    /* try { // try from 001038f6 to 00103981 has its CatchHandler @ 00103a39 */
      FUN_00104023(local_60 * 8 + local_58,param_3,param_4,uVar1);
      local_70 = 0;
      uVar1 = FUN_001034dc(local_80);
      puVar2 = (undefined8 *)FUN_0010353e(&local_88);
      local_70 = FUN_0010417f(*local_80,*puVar2,local_58,uVar1);
      local_70 = local_70 + param_3 * 8;
      uVar1 = FUN_001034dc(local_80);
      lVar4 = local_80[1];
      puVar2 = (undefined8 *)FUN_0010353e(&local_88);
      local_70 = FUN_0010417f(*puVar2,lVar4,local_70,uVar1);
      uVar1 = FUN_001034dc(local_80);
      FUN_001034ee(*local_80,local_80[1],uVar1);
      FUN_001034a2(local_80,*local_80,local_80[2] - *local_80 >> 3);
      *local_80 = local_58;
      local_80[1] = local_70;
      local_80[2] = local_68 * 8 + local_58;
    }
    else {
      FUN_00103e34(local_38,param_1,param_4);
                    /* try { // try from 00103676 to 00103849 has its CatchHandler @ 00103a1b */
      local_50 = FUN_00103ec8(local_38);
      local_78 = FUN_001031dc(local_80);
      local_48 = FUN_00103ee6(&local_78,&local_88);
      local_40 = local_80[1];
      if (param_3 < local_48) {
        uVar1 = FUN_001034dc(local_80);
        FUN_00103f2a(param_3 * -8 + local_80[1],local_80[1],local_80[1],uVar1);
        local_80[1] = param_3 * 8 + local_80[1];
        lVar4 = param_3 * -8 + local_40;
        puVar2 = (undefined8 *)FUN_0010353e(&local_88);
        FUN_00103f82(*puVar2,lVar4,local_40);
        plVar3 = (long *)FUN_0010353e(&local_88);
        lVar4 = *plVar3;
        puVar2 = (undefined8 *)FUN_0010353e(&local_88);
        FUN_00103fd2(*puVar2,lVar4 + param_3 * 8,local_50);
      }
      else {
        uVar1 = FUN_001034dc(local_80);
        lVar4 = FUN_00104023(local_80[1],param_3 - local_48,local_50,uVar1);
        local_80[1] = lVar4;
        uVar1 = FUN_001034dc(local_80);
        lVar4 = local_80[1];
        puVar2 = (undefined8 *)FUN_0010353e(&local_88);
        FUN_00103f2a(*puVar2,local_40,lVar4,uVar1);
        local_80[1] = local_48 * 8 + local_80[1];
        puVar2 = (undefined8 *)FUN_0010353e(&local_88);
        FUN_00103fd2(*puVar2,local_40,local_50);
      }
      FUN_00103e94(local_38);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010450e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010474e(param_1,param_2,param_3);
  return;
}




void FUN_001052cb(void)

{
  return;
}




void FUN_00104599(undefined8 param_1,undefined8 param_2)

{
  FUN_001047e8(param_1,param_2,0);
  return;
}




undefined8 FUN_0010307f(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00104204(undefined8 param_1,undefined8 param_2)

{
  FUN_00104614(param_1,param_2);
  return;
}




undefined8 FUN_0010443e(undefined8 param_1)

{
  return param_1;
}




void FUN_0010535a(void)

{
  return;
}




void FUN_00103122(undefined8 param_1)

{
  FUN_00103492(param_1);
  return;
}




void FUN_0010351c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00104d65(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00104d9c(param_1,2);
  puts((char *)*puVar1);
  return;
}




void FUN_00105670(void)

{
  return;
}




void FUN_00104ec1(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




long FUN_00103bbe(long *param_1)

{
  return param_1[1] - *param_1 >> 3;
}




void FUN_00104f9c(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_001052e1(void)

{
  return;
}




undefined8 FUN_00103d06(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(undefined8 *)(param_1 + 8);
  FUN_00103e00(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




/* WARNING: Removing unreachable block (ram,0x00102543) */
/* WARNING: Removing unreachable block (ram,0x0010254f) */

void FUN_00102530(void)

{
  return;
}




void FUN_00104356(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00104344(param_3);
  FUN_00104658(param_1,param_2,uVar1);
  return;
}




long FUN_00104d9c(long *param_1,long param_2)

{
  return *param_1 + param_2 * 8;
}




undefined8 FUN_00104af3(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  puVar1 = (undefined8 *)FUN_00103e22(&local_10);
  return *puVar1;
}




ulong * FUN_00104991(ulong *param_1,ulong *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_00105323(void)

{
  return;
}




long FUN_0010432e(long param_1)

{
  return param_1 + 8;
}




void FUN_00104a58(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00104b49(param_2);
  uVar2 = FUN_00104b49(param_1);
  FUN_00104b6f(uVar2,uVar1,param_3);
  return;
}




void FUN_001044d0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *local_20;
  
  uVar1 = *param_3;
  for (local_20 = param_1; local_20 != param_2; local_20 = local_20 + 1) {
    *local_20 = uVar1;
  }
  return;
}




void FUN_001042be(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00104627(param_1,param_2,param_3);
  return;
}




void FUN_00103c48(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010422e(param_1,param_3);
                    /* try { // try from 00103c82 to 00103c86 has its CatchHandler @ 00103c89 */
  FUN_00104264(param_1,param_2);
  return;
}




void FUN_0010474e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00104925(param_1,param_2,param_3);
  return;
}




void FUN_00104e40(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001049ea(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_001044be(param_3);
  uVar2 = FUN_00104af3(local_28);
  uVar3 = FUN_00104af3(local_20);
  uVar1 = FUN_00104b14(uVar3,uVar2,uVar1);
  FUN_00104738(&local_30,uVar1);
  return;
}




void * FUN_00104bdd(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




void FUN_001034ee(undefined8 param_1,undefined8 param_2)

{
  FUN_00103dd5(param_1,param_2);
  return;
}




void FUN_00104f17(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00104b6f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_001044be(param_3);
  uVar2 = FUN_001044be(local_28);
  uVar3 = FUN_001044be(local_20);
  uVar1 = FUN_00104c55(uVar3,uVar2,uVar1);
  FUN_00104738(&local_30,uVar1);
  return;
}




void FUN_00103fd2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001044be(param_2);
  uVar2 = FUN_001044be(param_1);
  FUN_001044d0(uVar2,uVar1,param_3);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00102584) */
/* WARNING: Removing unreachable block (ram,0x00102590) */

void FUN_00102560(void)

{
  return;
}




void FUN_00104264(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_00104148(param_1,param_2);
  *param_1 = lVar1;
  param_1[1] = *param_1;
  param_1[2] = param_2 * 8 + *param_1;
  return;
}




void FUN_001046b0(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00102c26(void)

{
  int __fd;
  int iVar1;
  ssize_t sVar2;
  long in_FS_OFFSET;
  char *local_f8;
  undefined8 local_f0;
  size_t local_e8;
  char *local_e0;
  undefined local_d8 [32];
  undefined8 local_b8 [4];
  sockaddr local_98;
  char local_88 [104];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001030d6(local_d8);
  local_88[0] = '\0';
  local_88[1] = '\0';
  local_88[2] = '\0';
  local_88[3] = '\0';
  local_88[4] = '\0';
  local_88[5] = '\0';
  local_88[6] = '\0';
  local_88[7] = '\0';
  local_88[8] = '\0';
  local_88[9] = '\0';
  local_88[10] = '\0';
  local_88[0xb] = '\0';
  local_88[0xc] = '\0';
  local_88[0xd] = '\0';
  local_88[0xe] = '\0';
  local_88[0xf] = '\0';
  local_88[0x10] = '\0';
  local_88[0x11] = '\0';
  local_88[0x12] = '\0';
  local_88[0x13] = '\0';
  local_88[0x14] = '\0';
  local_88[0x15] = '\0';
  local_88[0x16] = '\0';
  local_88[0x17] = '\0';
  local_88[0x18] = '\0';
  local_88[0x19] = '\0';
  local_88[0x1a] = '\0';
  local_88[0x1b] = '\0';
  local_88[0x1c] = '\0';
  local_88[0x1d] = '\0';
  local_88[0x1e] = '\0';
  local_88[0x1f] = '\0';
  local_88[0x20] = '\0';
  local_88[0x21] = '\0';
  local_88[0x22] = '\0';
  local_88[0x23] = '\0';
  local_88[0x24] = '\0';
  local_88[0x25] = '\0';
  local_88[0x26] = '\0';
  local_88[0x27] = '\0';
  local_88[0x28] = '\0';
  local_88[0x29] = '\0';
  local_88[0x2a] = '\0';
  local_88[0x2b] = '\0';
  local_88[0x2c] = '\0';
  local_88[0x2d] = '\0';
  local_88[0x2e] = '\0';
  local_88[0x2f] = '\0';
  local_88[0x30] = '\0';
  local_88[0x31] = '\0';
  local_88[0x32] = '\0';
  local_88[0x33] = '\0';
  local_88[0x34] = '\0';
  local_88[0x35] = '\0';
  local_88[0x36] = '\0';
  local_88[0x37] = '\0';
  local_88[0x38] = '\0';
  local_88[0x39] = '\0';
  local_88[0x3a] = '\0';
  local_88[0x3b] = '\0';
  local_88[0x3c] = '\0';
  local_88[0x3d] = '\0';
  local_88[0x3e] = '\0';
  local_88[0x3f] = '\0';
  local_88[0x40] = '\0';
  local_88[0x41] = '\0';
  local_88[0x42] = '\0';
  local_88[0x43] = '\0';
  local_88[0x44] = '\0';
  local_88[0x45] = '\0';
  local_88[0x46] = '\0';
  local_88[0x47] = '\0';
  local_88[0x48] = '\0';
  local_88[0x49] = '\0';
  local_88[0x4a] = '\0';
  local_88[0x4b] = '\0';
  local_88[0x4c] = '\0';
  local_88[0x4d] = '\0';
  local_88[0x4e] = '\0';
  local_88[0x4f] = '\0';
  local_88[0x50] = '\0';
  local_88[0x51] = '\0';
  local_88[0x52] = '\0';
  local_88[0x53] = '\0';
  local_88[0x54] = '\0';
  local_88[0x55] = '\0';
  local_88[0x56] = '\0';
  local_88[0x57] = '\0';
  local_88[0x58] = '\0';
  local_88[0x59] = '\0';
  local_88[0x5a] = '\0';
  local_88[0x5b] = '\0';
  local_88[0x5c] = '\0';
  local_88[0x5d] = '\0';
  local_88[0x5e] = '\0';
  local_88[0x5f] = '\0';
  local_88[0x60] = '\0';
  local_88[0x61] = '\0';
  local_88[0x62] = '\0';
  local_88[99] = '\0';
  local_f8 = local_88;
  local_e8 = strlen(local_f8);
  __fd = socket(2,1,6);
  if (__fd != -1) {
    memset(&local_98,0,0x10);
    local_98.sa_family = 2;
    local_98.sa_data._2_4_ = inet_addr("127.0.0.1");
    local_98.sa_data._0_2_ = htons(0x6987);
                    /* try { // try from 00102d69 to 00102f7d has its CatchHandler @ 00102fd5 */
    iVar1 = connect(__fd,&local_98,0x10);
    if (iVar1 != -1) {
      sVar2 = recv(__fd,local_f8 + local_e8,99 - local_e8,0);
      iVar1 = (int)sVar2;
      if ((iVar1 != -1) && (iVar1 != 0)) {
        local_f8[local_e8 + (long)iVar1] = '\0';
        local_e0 = strchr(local_f8,0xd);
        if (local_e0 != (char *)0x0) {
          *local_e0 = '\0';
        }
        local_e0 = strchr(local_f8,10);
        if (local_e0 != (char *)0x0) {
          *local_e0 = '\0';
        }
      }
    }
  }
  if (__fd != -1) {
    close(__fd);
  }
  local_f0 = FUN_001031dc(local_d8);
  FUN_0010322c(local_b8,&local_f0);
  FUN_0010325a(local_d8,local_b8[0],1,&local_f8);
  local_f0 = FUN_001031dc(local_d8);
  FUN_0010322c(local_b8,&local_f0);
  FUN_0010325a(local_d8,local_b8[0],1,&local_f8);
  local_f0 = FUN_001031dc(local_d8);
  FUN_0010322c(local_b8,&local_f0);
  FUN_0010325a(local_d8,local_b8[0],1,&local_f8);
  FUN_00103320(local_b8,local_d8);
                    /* try { // try from 00102f88 to 00102f8c has its CatchHandler @ 00102fbd */
  FUN_00104d65(local_b8);
  FUN_00103194(local_b8);
  FUN_00103194(local_d8);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



