
undefined8 FUN_0010299a(undefined8 *param_1)

{
  return *param_1;
}




void FUN_00102b84(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00102d00(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 * 0x30);
  return;
}




undefined8 FUN_00103712(long param_1,long param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 *puVar3;
  
  uVar1 = FUN_001022aa(param_1);
  uVar2 = FUN_001037fc(param_2);
  uVar1 = FUN_00103812(param_1,uVar2,uVar1,param_3);
  puVar3 = (undefined8 *)FUN_001027b0(param_1);
  uVar2 = FUN_00103981(uVar1);
  *puVar3 = uVar2;
  puVar3 = (undefined8 *)FUN_0010259e(param_1);
  uVar2 = FUN_0010399f(uVar1);
  *puVar3 = uVar2;
  *(undefined8 *)(param_1 + 0x28) = *(undefined8 *)(param_2 + 0x28);
  return uVar1;
}




void FUN_0010415d(void)

{
  return;
}




void FUN_00102dad(undefined8 param_1)

{
  FUN_00102dcb(param_1);
  return;
}




void FUN_00102b52(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102cd8(param_1,param_2,param_3);
  return;
}




void FUN_00102238(undefined8 param_1,undefined8 param_2)

{
  FUN_001028f4(param_1,param_2);
  FUN_00102938(param_1,param_2);
  return;
}




undefined8 FUN_00102612(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  char local_59;
  long local_58;
  long local_50;
  undefined8 local_48;
  undefined8 local_40;
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_58 = FUN_00102294(param_1);
  local_50 = FUN_001022aa(param_1);
  local_59 = '\x01';
  while (local_58 != 0) {
    local_50 = local_58;
    uVar2 = FUN_001020fb(local_58);
    local_59 = FUN_0010193e(param_1,param_2,uVar2);
    if (local_59 == '\0') {
      local_58 = FUN_0010283a(local_58);
    }
    else {
      local_58 = FUN_00102972(local_58);
    }
  }
  FUN_00102276(&local_48,local_50);
  if (local_59 != '\0') {
    local_38[0] = FUN_00102a72(param_1);
    cVar1 = FUN_001018d0(&local_48,local_38);
    if (cVar1 != '\0') {
      FUN_00102ac2(local_38,&local_58,&local_50);
      goto LAB_00102794;
    }
    FUN_0010280e(&local_48);
  }
  uVar2 = FUN_001025b4(local_48);
  cVar1 = FUN_0010193e(param_1,uVar2,param_2);
  if (cVar1 == '\0') {
    local_40 = 0;
    FUN_0010287c(local_38,&local_48,&local_40);
  }
  else {
    FUN_00102ac2(local_38,&local_58,&local_50);
  }
LAB_00102794:
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_38[0];
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




bool FUN_001042b9(pthread_t *param_1)

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




void FUN_0010237e(undefined8 param_1)

{
  FUN_00102988(param_1);
  return;
}




void FUN_00103420(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  
  FUN_00103556(param_1,param_2);
  lVar1 = FUN_001035c6(param_2);
  if (lVar1 != 0) {
    puVar2 = (undefined8 *)FUN_001035dc(param_1);
                    /* try { // try from 0010347b to 0010347f has its CatchHandler @ 00103485 */
    uVar3 = FUN_001035f2(param_1,param_2);
    *puVar2 = uVar3;
  }
  return;
}




void FUN_001025b4(undefined8 param_1)

{
  FUN_001020fb(param_1);
  return;
}




long FUN_0010259e(long param_1)

{
  return param_1 + 0x20;
}




void FUN_00101509(undefined8 param_1)

{
  long *plVar1;
  long in_FS_OFFSET;
  undefined4 local_94;
  undefined8 *local_90;
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
  uint local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_94 = 2;
  plVar1 = (long *)FUN_0010175c(param_1,&local_94);
  local_90 = (undefined8 *)*plVar1;
  memset(&local_88,0x43,99);
  local_28 = local_28 & 0xffffff;
  *local_90 = local_88;
  local_90[1] = local_80;
  local_90[2] = local_78;
  local_90[3] = local_70;
  local_90[4] = local_68;
  local_90[5] = local_60;
  local_90[6] = local_58;
  local_90[7] = local_50;
  local_90[8] = local_48;
  local_90[9] = local_40;
  local_90[10] = local_38;
  local_90[0xb] = local_30;
  *(uint *)(local_90 + 0xc) = local_28;
  *(undefined *)((long)local_90 + 99) = 0;
  FUN_00103be4(local_90);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010419f(void)

{
  return;
}




undefined8 FUN_00104337(undefined8 *param_1)

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




void FUN_001043b0(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00103de8(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_0010242e(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001029b0(param_1);
  FUN_001029c2(uVar1,1);
  return;
}




void FUN_00103c0a(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_001027c6(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102a60(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00102a60(param_3);
  param_1[1] = *puVar1;
  return;
}




void FUN_00104189(void)

{
  return;
}




void FUN_00102cc4(void)

{
  return;
}




undefined8 FUN_00104314(void *param_1)

{
  free(param_1);
  return 1;
}




undefined8 FUN_001031b3(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00103be4("Calling good()...");
  FUN_001031a3();
  FUN_00103be4("Finished good()");
  FUN_00103be4("Calling bad()...");
  FUN_00102de9();
  FUN_00103be4("Finished bad()");
  return 0;
}




undefined8 FUN_00101cae(undefined8 param_1)

{
  return param_1;
}




void FUN_00101749(void)

{
  return;
}




void FUN_00102bd4(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_38 [8];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101c9c(param_3);
  uVar1 = FUN_00101cae(param_4);
  FUN_00101978(local_38,uVar1);
  FUN_00101cc0(param_5);
  uVar1 = FUN_00101733(0x10,param_2);
                    /* try { // try from 00102c5c to 00102c60 has its CatchHandler @ 00102c63 */
  FUN_00102d18(uVar1,local_38);
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00101c12(undefined8 param_1)

{
  return param_1;
}




void FUN_00104105(void)

{
  return;
}




undefined8 FUN_00101b92(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102276(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




/* WARNING: Removing unreachable block (ram,0x001014a4) */
/* WARNING: Removing unreachable block (ram,0x001014b0) */

void FUN_00101480(void)

{
  return;
}




void FUN_0010333c(undefined8 param_1)

{
  FUN_001033e2(param_1);
  return;
}




undefined8 FUN_00102538(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102276(&local_18,*param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




long FUN_001035dc(long param_1)

{
  return param_1 + 0x10;
}




void FUN_00103e13(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_0010413c(void)

{
  return;
}




void FUN_001037e8(void)

{
  return;
}




void FUN_00101888(undefined8 param_1,undefined8 param_2)

{
  FUN_00101b42(param_1,param_2);
  return;
}




void FUN_0010329c(long param_1)

{
  *(undefined8 *)(param_1 + 8) = 0;
  *(long *)(param_1 + 0x10) = param_1;
  *(long *)(param_1 + 0x18) = param_1;
  *(undefined8 *)(param_1 + 0x20) = 0;
  return;
}




void FUN_00104126(void)

{
  return;
}




void FUN_00102dcb(undefined8 param_1)

{
  FUN_001023d4(param_1);
  return;
}




void FUN_0010287c(undefined8 *param_1,undefined8 param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102a60(param_2);
  *param_1 = *puVar1;
  param_1[1] = *param_3;
  return;
}




void FUN_00102ac2(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00102c9f(param_2);
  *param_1 = *puVar1;
  puVar1 = (undefined8 *)FUN_00102a60(param_3);
  param_1[1] = *puVar1;
  return;
}




undefined8 FUN_001037fc(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00102b0a(undefined8 param_1)

{
  FUN_00102cb2(param_1);
  return;
}




void FUN_001034dc(void)

{
  return;
}




undefined8 FUN_00102cb2(undefined8 param_1)

{
  return param_1;
}




void FUN_0010245a(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  
  FUN_00101733(0x30,param_2);
  uVar1 = FUN_00101cc0(param_5);
  uVar2 = FUN_00101cae(param_4);
  uVar3 = FUN_00101c9c(param_3);
  uVar4 = FUN_00101bf0(param_2);
  uVar5 = FUN_001029b0(param_1);
                    /* try { // try from 001024e9 to 001024ed has its CatchHandler @ 001024f0 */
  FUN_001029f0(uVar5,uVar4,uVar3,uVar2,uVar1);
  return;
}




undefined8 FUN_00102588(long param_1)

{
  return *(undefined8 *)(param_1 + 0x28);
}




undefined8 FUN_00102972(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00103ce5(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101bf0(long param_1)

{
  FUN_0010237e(param_1 + 0x20);
  return;
}




undefined8 FUN_001029b0(undefined8 param_1)

{
  return param_1;
}




void FUN_001033e2(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102294(param_1);
  FUN_001034ec(param_1,uVar1);
  FUN_001032dc(param_1);
  return;
}




long FUN_001022aa(long param_1)

{
  return param_1 + 8;
}




void FUN_00103be4(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_001041aa(void)

{
  return;
}




undefined8 FUN_001022c0(undefined8 param_1,long param_2,long param_3,undefined8 param_4)

{
  char cVar1;
  undefined8 uVar2;
  long in_FS_OFFSET;
  long local_40;
  long local_38;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_40 = param_3;
  local_38 = param_2;
  while (local_38 != 0) {
    uVar2 = FUN_001020fb(local_38);
    cVar1 = FUN_0010193e(param_1,uVar2,param_4);
    if (cVar1 == '\x01') {
      local_38 = FUN_0010283a(local_38);
    }
    else {
      local_40 = local_38;
      local_38 = FUN_00102972(local_38);
    }
  }
  FUN_00102276(&local_28,local_40);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




undefined8 FUN_00101cc0(undefined8 param_1)

{
  return param_1;
}




void FUN_00103a4e(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = *param_1;
  uVar2 = FUN_00103a88(param_2);
  FUN_00103a9a(uVar1,uVar2);
  return;
}




void FUN_0010239c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101c12(param_2);
  FUN_00102404(param_1,uVar1);
  return;
}




void FUN_001036e0(void)

{
  return;
}




void FUN_00102d6a(undefined4 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_00102dad(param_2);
  puVar2 = (undefined4 *)FUN_001023f2(uVar1);
  *param_1 = *puVar2;
  *(undefined8 *)(param_1 + 2) = 0;
  return;
}




void FUN_00102de9(void)

{
  long *plVar1;
  void **ppvVar2;
  long in_FS_OFFSET;
  void *local_98;
  long local_90;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010331c(local_88);
  for (ppvVar2 = &local_98; ppvVar2 != &local_98; ppvVar2 = (void **)((long)ppvVar2 + -0x1000)) {
    *(undefined8 *)((long)ppvVar2 + -8) = *(undefined8 *)((long)ppvVar2 + -8);
  }
  *(undefined8 *)((long)ppvVar2 + -8) = *(undefined8 *)((long)ppvVar2 + -8);
  local_98 = (void *)((ulong)((long)ppvVar2 + -0x61) & 0xfffffffffffffff0);
  *(undefined8 *)((long)ppvVar2 + -0x78) = 0x102eb5;
  memset((void *)((ulong)((long)ppvVar2 + -0x61) & 0xfffffffffffffff0),0x41,99);
  *(undefined *)((long)local_98 + 99) = 0;
  local_90 = (long)local_98 + -8;
  local_58[0] = 0;
                    /* try { // try from 00102eea to 00102f53 has its CatchHandler @ 00102f9f */
  *(undefined8 *)((long)ppvVar2 + -0x78) = 0x102eef;
  plVar1 = (long *)FUN_0010175c(local_88,local_58);
  *plVar1 = local_90;
  local_58[0] = 1;
  *(undefined8 *)((long)ppvVar2 + -0x78) = 0x102f13;
  plVar1 = (long *)FUN_0010175c(local_88,local_58);
  *plVar1 = local_90;
  local_58[0] = 2;
  *(undefined8 *)((long)ppvVar2 + -0x78) = 0x102f37;
  plVar1 = (long *)FUN_0010175c(local_88,local_58);
  *plVar1 = local_90;
  *(undefined8 *)((long)ppvVar2 + -0x78) = 0x102f54;
  FUN_0010335c(local_58,local_88);
                    /* try { // try from 00102f5b to 00102f5f has its CatchHandler @ 00102f8a */
  *(undefined8 *)((long)ppvVar2 + -0x78) = 0x102f60;
  FUN_00101509(local_58);
  *(undefined8 *)((long)ppvVar2 + -0x78) = 0x102f6c;
  FUN_0010333c(local_58);
  *(undefined8 *)((long)ppvVar2 + -0x78) = 0x102f78;
  FUN_0010333c(local_88);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)((long)ppvVar2 + -0x78) = 0x102fc2;
  __stack_chk_fail();
}




void FUN_00104131(void)

{
  return;
}




undefined8 FUN_001019a2(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101c12(param_2);
  FUN_00101c24(param_1,uVar1);
  return param_1;
}




void FUN_001028bc(long param_1)

{
  FUN_00102b0a(param_1 + 0x20);
  return;
}




undefined8 FUN_00103a22(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_00104147(void)

{
  return;
}




void FUN_00101be2(void)

{
  return;
}




undefined8 FUN_00102c9f(undefined8 param_1)

{
  return param_1;
}




void FUN_00104490(void)

{
  return;
}




void FUN_0010411b(void)

{
  return;
}




void FUN_00102276(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00103d10(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_001035f2(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_18 [8];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001036f4(local_18,param_1);
  FUN_00103712(param_1,param_2,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




ulong FUN_00103fd8(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_0010509c,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001025d2(undefined8 *param_1,undefined8 *param_2,undefined8 param_3)

{
  undefined8 *puVar1;
  
  *param_1 = *param_2;
  puVar1 = (undefined8 *)FUN_00102a60(param_3);
  param_1[1] = *puVar1;
  return;
}




undefined8 FUN_00101cd2(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  uVar1 = FUN_0010242e(param_1);
  uVar2 = FUN_00101cc0(param_4);
  uVar3 = FUN_00101cae(param_3);
  uVar4 = FUN_00101c9c(param_2);
  FUN_0010245a(param_1,uVar1,uVar4,uVar3,uVar2);
  return uVar1;
}




long FUN_00103812(undefined8 param_1,long param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined8 uVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 local_38;
  
  lVar1 = FUN_001039be(param_1,param_2,param_4);
  *(undefined8 *)(lVar1 + 8) = param_3;
  if (*(long *)(param_2 + 0x18) != 0) {
    uVar2 = FUN_00103a22(param_2);
                    /* try { // try from 00103881 to 00103913 has its CatchHandler @ 0010393f */
    uVar2 = FUN_00103812(param_1,uVar2,lVar1,param_4);
    *(undefined8 *)(lVar1 + 0x18) = uVar2;
  }
  local_38 = FUN_00103a38(param_2);
  local_40 = lVar1;
  while (local_38 != 0) {
    lVar3 = FUN_001039be(param_1,local_38,param_4);
    *(long *)(local_40 + 0x10) = lVar3;
    *(long *)(lVar3 + 8) = local_40;
    if (*(long *)(local_38 + 0x18) != 0) {
      uVar2 = FUN_00103a22(local_38);
      uVar2 = FUN_00103812(param_1,uVar2,lVar3,param_4);
      *(undefined8 *)(lVar3 + 0x18) = uVar2;
    }
    local_38 = FUN_00103a38(local_38);
    local_40 = lVar3;
  }
  return lVar1;
}




undefined8 * FUN_0010280e(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_decrement((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




void FUN_00102cd8(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_001029f0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
                 undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  uVar1 = FUN_00101cc0(param_5);
  uVar2 = FUN_00101cae(param_4);
  uVar3 = FUN_00101c9c(param_3);
  FUN_00102bd4(param_1,param_2,uVar3,uVar2,uVar1);
  return;
}




void FUN_00102938(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001029b0(param_1);
  FUN_00102b52(uVar1,param_2,1);
  return;
}




undefined8 FUN_001035c6(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




void FUN_00104194(void)

{
  return;
}




void FUN_001032fc(undefined8 param_1)

{
  FUN_00103386(param_1);
  return;
}




void FUN_001043ee(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




undefined8 FUN_001023f2(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00101733(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




undefined8
FUN_0010214e(long param_1,long param_2,_Rb_tree_node_base *param_3,_Rb_tree_node_base *param_4)

{
  char cVar1;
  bool bVar2;
  _Rb_tree_node_base *p_Var3;
  undefined8 uVar4;
  undefined8 uVar5;
  long in_FS_OFFSET;
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  if (param_2 == 0) {
    p_Var3 = (_Rb_tree_node_base *)FUN_001022aa(param_1);
    if (param_3 != p_Var3) {
      uVar4 = FUN_001025b4(param_3);
      uVar5 = FUN_001020fb(param_4);
      cVar1 = FUN_0010193e(param_1,uVar5,uVar4);
      if (cVar1 == '\0') {
        bVar2 = false;
        goto LAB_001021d2;
      }
    }
  }
  bVar2 = true;
LAB_001021d2:
  std::_Rb_tree_insert_and_rebalance(bVar2,param_4,param_3,(_Rb_tree_node_base *)(param_1 + 8));
  *(long *)(param_1 + 0x28) = *(long *)(param_1 + 0x28) + 1;
  FUN_00102276(&local_28,param_4);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_28;
}




void FUN_00103656(void)

{
  return;
}




undefined8 FUN_00102a72(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102276(&local_18,*(undefined8 *)(param_1 + 0x18));
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




ulong FUN_00103ed4(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_00105094,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00104420(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




undefined4 * FUN_001039be(undefined8 param_1,undefined4 *param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined4 *puVar2;
  
  uVar1 = FUN_001028bc(param_2);
  puVar2 = (undefined4 *)FUN_00103a4e(param_3,uVar1);
  *puVar2 = *param_2;
  *(undefined8 *)(puVar2 + 4) = 0;
  *(undefined8 *)(puVar2 + 6) = 0;
  return puVar2;
}




void FUN_00103386(long param_1)

{
  FUN_001034ac(param_1);
  FUN_001034cc(param_1);
  FUN_00103272(param_1 + 8);
  return;
}




void FUN_00103b54(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00103a88(param_3);
  FUN_00103b92(param_1,param_2,uVar1);
  return;
}




void FUN_00102fc8(void)

{
  undefined8 *puVar1;
  void **ppvVar2;
  long in_FS_OFFSET;
  void *local_98;
  void *local_90;
  undefined local_88 [48];
  undefined4 local_58 [14];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010331c(local_88);
  for (ppvVar2 = &local_98; ppvVar2 != &local_98; ppvVar2 = (void **)((long)ppvVar2 + -0x1000)) {
    *(undefined8 *)((long)ppvVar2 + -8) = *(undefined8 *)((long)ppvVar2 + -8);
  }
  *(undefined8 *)((long)ppvVar2 + -8) = *(undefined8 *)((long)ppvVar2 + -8);
  local_98 = (void *)((ulong)((long)ppvVar2 + -0x61) & 0xfffffffffffffff0);
  *(undefined8 *)((long)ppvVar2 + -0x78) = 0x103094;
  memset((void *)((ulong)((long)ppvVar2 + -0x61) & 0xfffffffffffffff0),0x41,99);
  *(undefined *)((long)local_98 + 99) = 0;
  local_90 = local_98;
  local_58[0] = 0;
                    /* try { // try from 001030c5 to 0010312e has its CatchHandler @ 0010317a */
  *(undefined8 *)((long)ppvVar2 + -0x78) = 0x1030ca;
  puVar1 = (undefined8 *)FUN_0010175c(local_88,local_58);
  *puVar1 = local_90;
  local_58[0] = 1;
  *(undefined8 *)((long)ppvVar2 + -0x78) = 0x1030ee;
  puVar1 = (undefined8 *)FUN_0010175c(local_88,local_58);
  *puVar1 = local_90;
  local_58[0] = 2;
  *(undefined8 *)((long)ppvVar2 + -0x78) = 0x103112;
  puVar1 = (undefined8 *)FUN_0010175c(local_88,local_58);
  *puVar1 = local_90;
  *(undefined8 *)((long)ppvVar2 + -0x78) = 0x10312f;
  FUN_0010335c(local_58,local_88);
                    /* try { // try from 00103136 to 0010313a has its CatchHandler @ 00103165 */
  *(undefined8 *)((long)ppvVar2 + -0x78) = 0x10313b;
  FUN_0010161e(local_58);
  *(undefined8 *)((long)ppvVar2 + -0x78) = 0x103147;
  FUN_0010333c(local_58);
  *(undefined8 *)((long)ppvVar2 + -0x78) = 0x103153;
  FUN_0010333c(local_88);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)((long)ppvVar2 + -0x78) = 0x10319d;
  __stack_chk_fail();
}




void FUN_00103981(undefined8 param_1)

{
  FUN_00103218(param_1);
  return;
}




undefined8 FUN_001028de(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00101c24(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101c12(param_2);
  FUN_0010239c(param_1,uVar1);
  return;
}




void FUN_001023d4(undefined8 param_1)

{
  FUN_0010299a(param_1);
  return;
}




void FUN_00102b28(undefined8 param_1,undefined8 param_2)

{
  FUN_00102cc4(param_1,param_2);
  return;
}




void FUN_00103d3b(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00103cba(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_001018d0(long *param_1,long *param_2)

{
  return CONCAT71((int7)((ulong)*param_2 >> 8),*param_1 == *param_2);
}




undefined8 FUN_00103665(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_001037ba(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_001041b5(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_001036f4(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_0010399f(undefined8 param_1)

{
  FUN_00103245(param_1);
  return;
}




void FUN_00104173(void)

{
  return;
}




void FUN_001018b2(undefined8 param_1)

{
  FUN_00101b92(param_1);
  return;
}




void FUN_001040ef(void)

{
  return;
}




void FUN_001034ec(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  long lVar2;
  undefined8 local_28;
  
  local_28 = param_2;
  while (local_28 != 0) {
    uVar1 = FUN_0010283a(local_28);
    FUN_001034ec(param_1,uVar1);
    lVar2 = FUN_00102972(local_28);
    FUN_00102238(param_1,local_28);
    local_28 = lVar2;
  }
  return;
}




long FUN_001027b0(long param_1)

{
  return param_1 + 0x18;
}




void FUN_00104110(void)

{
  return;
}




void FUN_00101b42(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001022aa(param_1);
  uVar2 = FUN_00102294(param_1);
  FUN_001022c0(param_1,uVar2,uVar1,param_2);
  return;
}




void FUN_00103272(undefined4 *param_1)

{
  *param_1 = 0;
  FUN_0010329c(param_1);
  return;
}




undefined8 FUN_00103a88(undefined8 param_1)

{
  return param_1;
}




void FUN_00103e41(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_0010335c(undefined8 param_1,undefined8 param_2)

{
  FUN_00103420(param_1,param_2);
  return;
}




undefined4 FUN_0010193e(undefined8 param_1,int *param_2,int *param_3)

{
  return CONCAT31((int3)((uint)*param_3 >> 8),*param_2 < *param_3);
}




void FUN_00101c5c(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001023d4(param_2);
  uVar1 = FUN_001023f2(uVar1);
  FUN_00102404(param_1,uVar1);
  return;
}




void FUN_00104152(void)

{
  return;
}




void FUN_00103c90(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




undefined8 FUN_001040c6(void)

{
  return 0;
}




undefined8 FUN_00102d00(void)

{
  return 0x2aaaaaaaaaaaaaa;
}




void FUN_001028f4(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00101bf0(param_2);
  uVar2 = FUN_001029b0(param_1);
  FUN_00102b28(uVar2,uVar1);
  return;
}




void FUN_001034cc(void)

{
  return;
}




void FUN_00104168(void)

{
  return;
}




undefined8 FUN_00101965(undefined8 param_1)

{
  return param_1;
}




void FUN_00103556(long param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103665(param_1,param_2);
  FUN_001036e0(param_1,param_2);
  FUN_00103272(param_1 + 8);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001031a3(void)

{
  FUN_00102fc8();
  return;
}




void FUN_001033c2(undefined8 param_1)

{
  FUN_001034dc(param_1);
  return;
}




undefined8 FUN_00101c9c(undefined8 param_1)

{
  return param_1;
}




void FUN_00102404(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101c12(param_2);
  *param_1 = uVar1;
  return;
}




void FUN_001043cf(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




undefined8
FUN_001019fc(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4,
            undefined8 param_5)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  long in_FS_OFFSET;
  undefined8 local_48;
  undefined8 local_40;
  undefined local_38 [16];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00101cc0(param_5);
  uVar2 = FUN_00101cae(param_4);
  uVar3 = FUN_00101c9c(param_3);
  local_40 = FUN_00101cd2(param_1,uVar3,uVar2,uVar1);
                    /* try { // try from 00101a78 to 00101abb has its CatchHandler @ 00101af9 */
  uVar1 = FUN_001020fb(local_40);
  local_38 = FUN_00101d52(param_1,param_2,uVar1);
  if (local_38._8_8_ == 0) {
    FUN_00102238(param_1,local_40);
    FUN_00102276(&local_48,local_38._0_8_);
  }
  else {
    local_48 = FUN_0010214e(param_1,local_38._0_8_,local_38._8_8_,local_40);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48;
}




undefined8 * FUN_00102850(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = std::_Rb_tree_increment((_Rb_tree_node_base *)*param_1);
  *param_1 = uVar1;
  return param_1;
}




void FUN_00103d66(undefined4 param_1)

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




undefined8 FUN_001040b7(void)

{
  return 1;
}




undefined8 FUN_00102988(undefined8 param_1)

{
  return param_1;
}




void FUN_001040fa(void)

{
  return;
}




void FUN_00101978(undefined8 param_1,undefined8 param_2)

{
  FUN_00101c5c(param_1,param_2);
  return;
}




void FUN_0010417e(void)

{
  return;
}




undefined8 FUN_00102a60(undefined8 param_1)

{
  return param_1;
}




/* WARNING: Type propagation algorithm not settling */

long FUN_00101d52(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  bool bVar1;
  char cVar2;
  long lVar3;
  long lVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  long *plVar8;
  long in_FS_OFFSET;
  undefined8 local_68;
  undefined8 local_60;
  long local_50;
  long local_48 [5];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_68 = param_2;
  local_60 = param_1;
  lVar3 = FUN_00102538(&local_68);
  local_50 = lVar3;
  lVar4 = FUN_001022aa(local_60);
  uVar7 = local_60;
  if (lVar3 != lVar4) {
    uVar6 = FUN_001025b4(local_50);
    cVar2 = FUN_0010193e(uVar7,param_3,uVar6);
    lVar3 = local_50;
    uVar7 = local_60;
    if (cVar2 == '\0') {
      uVar6 = FUN_001025b4(local_50);
      cVar2 = FUN_0010193e(uVar7,uVar6,param_3);
      lVar3 = local_50;
      if (cVar2 == '\0') {
        local_48[1] = 0;
        FUN_0010287c(local_48 + 2,&local_50,local_48 + 1);
      }
      else {
        local_48[0] = local_50;
        plVar8 = (long *)FUN_0010259e(local_60);
        uVar7 = local_60;
        if (lVar3 == *plVar8) {
          uVar7 = FUN_0010259e(local_60);
          local_48[1] = 0;
          FUN_001025d2(local_48 + 2,local_48 + 1,uVar7);
        }
        else {
          puVar5 = (undefined8 *)FUN_00102850(local_48);
          uVar6 = FUN_001025b4(*puVar5);
          cVar2 = FUN_0010193e(uVar7,param_3,uVar6);
          if (cVar2 == '\0') {
            local_48[2] = FUN_00102612(local_60,param_3);
          }
          else {
            lVar3 = FUN_0010283a(local_50);
            if (lVar3 == 0) {
              local_48[1] = 0;
              FUN_001025d2(local_48 + 2,local_48 + 1,&local_50);
            }
            else {
              FUN_001027c6(local_48 + 2,local_48,local_48);
            }
          }
        }
      }
    }
    else {
      local_48[0] = local_50;
      plVar8 = (long *)FUN_001027b0(local_60);
      uVar7 = local_60;
      if (lVar3 == *plVar8) {
        uVar7 = FUN_001027b0(local_60);
        uVar6 = FUN_001027b0(local_60);
        FUN_001027c6(local_48 + 2,uVar6,uVar7);
      }
      else {
        puVar5 = (undefined8 *)FUN_0010280e(local_48);
        uVar6 = FUN_001025b4(*puVar5);
        cVar2 = FUN_0010193e(uVar7,uVar6,param_3);
        if (cVar2 == '\0') {
          local_48[2] = FUN_00102612(local_60,param_3);
        }
        else {
          lVar3 = FUN_0010283a(local_48[0]);
          if (lVar3 == 0) {
            local_48[1] = 0;
            FUN_001025d2(local_48 + 2,local_48 + 1,local_48);
          }
          else {
            FUN_001027c6(local_48 + 2,&local_50,&local_50);
          }
        }
      }
    }
    goto LAB_001020e0;
  }
  lVar3 = FUN_00102588(local_60);
  uVar7 = local_60;
  if (lVar3 == 0) {
LAB_00101df4:
    bVar1 = false;
  }
  else {
    puVar5 = (undefined8 *)FUN_0010259e(local_60);
    uVar6 = FUN_001025b4(*puVar5);
    cVar2 = FUN_0010193e(uVar7,uVar6,param_3);
    if (cVar2 == '\0') goto LAB_00101df4;
    bVar1 = true;
  }
  if (bVar1) {
    uVar7 = FUN_0010259e(local_60);
    local_48[1] = 0;
    FUN_001025d2(local_48 + 2,local_48 + 1,uVar7);
  }
  else {
    local_48[2] = FUN_00102612(local_60,param_3);
  }
LAB_001020e0:
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_48[2];
}




void FUN_0010331c(undefined8 param_1)

{
  FUN_001032fc(param_1);
  return;
}




void FUN_0010191c(undefined8 *param_1)

{
  FUN_00101bf0(*param_1);
  return;
}




void FUN_00103dc0(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00103b92(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  
  puVar2 = (undefined8 *)FUN_00103a88(param_3);
  puVar3 = (undefined8 *)FUN_00101733(0x10,param_2);
  uVar1 = puVar2[1];
  *puVar3 = *puVar2;
  puVar3[1] = uVar1;
  return;
}




undefined8 FUN_00103a38(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}




undefined8 FUN_001041ec(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_001041b5,local_18);
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




void FUN_001032dc(undefined8 param_1)

{
  FUN_001033c2(param_1);
  return;
}




void FUN_00103ae6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  
  FUN_00101733(0x30,param_2);
  uVar1 = FUN_00103a88(param_3);
  uVar2 = FUN_00101bf0(param_2);
  uVar3 = FUN_001029b0(param_1);
  FUN_00103b54(uVar3,uVar2,uVar1);
  return;
}




void FUN_001034ac(undefined8 param_1)

{
  FUN_00103656(param_1);
  return;
}




void FUN_0010161e(undefined8 param_1)

{
  long *plVar1;
  long in_FS_OFFSET;
  undefined4 local_94;
  undefined8 *local_90;
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
  uint local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_94 = 2;
  plVar1 = (long *)FUN_0010175c(param_1,&local_94);
  local_90 = (undefined8 *)*plVar1;
  memset(&local_88,0x43,99);
  local_28 = local_28 & 0xffffff;
  *local_90 = local_88;
  local_90[1] = local_80;
  local_90[2] = local_78;
  local_90[3] = local_70;
  local_90[4] = local_68;
  local_90[5] = local_60;
  local_90[6] = local_58;
  local_90[7] = local_50;
  local_90[8] = local_48;
  local_90[9] = local_40;
  local_90[10] = local_38;
  local_90[0xb] = local_30;
  *(uint *)(local_90 + 0xc) = local_28;
  *(undefined *)((long)local_90 + 99) = 0;
  FUN_00103be4(local_90);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




long FUN_0010175c(undefined8 param_1,undefined8 param_2)

{
  bool bVar1;
  char cVar2;
  undefined8 uVar3;
  long lVar4;
  long in_FS_OFFSET;
  undefined local_39;
  undefined8 local_38;
  undefined local_30 [8];
  undefined8 local_28;
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  local_38 = FUN_00101888(param_1,param_2);
  local_28 = FUN_001018b2(param_1);
  cVar2 = FUN_001018d0(&local_38,&local_28);
  if (cVar2 == '\0') {
    FUN_001018f6(param_1);
    uVar3 = FUN_0010191c(&local_38);
    cVar2 = FUN_0010193e(local_30,param_2,uVar3);
    if (cVar2 == '\0') {
      bVar1 = false;
      goto LAB_001017fc;
    }
  }
  bVar1 = true;
LAB_001017fc:
  if (bVar1) {
    uVar3 = FUN_00101965(param_2);
    FUN_001019a2(local_30,uVar3);
    FUN_001019da(&local_28,&local_38);
    local_38 = FUN_001019fc(param_1,local_28,&DAT_00105004,local_30,&local_39);
  }
  lVar4 = FUN_0010191c(&local_38);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar4 + 8;
}




undefined4 FUN_001018f6(undefined8 param_1)

{
  undefined4 unaff_EBX;
  
  FUN_00101be2(param_1);
  return unaff_EBX;
}




long FUN_00103245(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x18) != 0; local_10 = *(long *)(local_10 + 0x18)) {
  }
  return local_10;
}




void FUN_001029c2(undefined8 param_1,undefined8 param_2)

{
  FUN_00102b84(param_1,param_2,0);
  return;
}




undefined8 FUN_001037ba(undefined8 param_1,undefined8 param_2)

{
  FUN_001036b6(param_1,param_2);
  return param_1;
}




void FUN_00103e74(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101463) */
/* WARNING: Removing unreachable block (ram,0x0010146f) */

void FUN_00101450(void)

{
  return;
}




undefined8 FUN_00103a9a(undefined8 param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010242e(param_1);
  uVar2 = FUN_00103a88(param_2);
  FUN_00103ae6(param_1,uVar1,uVar2);
  return uVar1;
}




void FUN_00103c64(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_0010283a(long param_1)

{
  return *(undefined8 *)(param_1 + 0x18);
}




void FUN_00101020(void)

{
  (*(code *)PTR_00108ed8)();
  return;
}




int FUN_001040d5(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00103c3c(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00102d18(undefined8 param_1,undefined8 param_2)

{
  long in_FS_OFFSET;
  undefined local_29;
  undefined8 local_28;
  undefined8 local_20;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_28 = param_2;
  local_20 = param_1;
  FUN_00102d6a(param_1,param_2,&local_29);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001020fb(undefined8 param_1)

{
  undefined8 uVar1;
  long in_FS_OFFSET;
  undefined local_11;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_001028bc(param_1);
  FUN_001028de(&local_11,uVar1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




long FUN_00103218(long param_1)

{
  undefined8 local_10;
  
  for (local_10 = param_1; *(long *)(local_10 + 0x10) != 0; local_10 = *(long *)(local_10 + 0x10)) {
  }
  return local_10;
}




void FUN_001019da(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_001036b6(undefined8 param_1,undefined8 param_2)

{
  FUN_001037e8(param_1,param_2);
  return;
}




void _FINI_0(void)

{
  if (DAT_00109020 == '\0') {
    if (PTR___cxa_finalize_00108fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00109008);
    }
    FUN_00101450();
    DAT_00109020 = 1;
    return;
  }
  return;
}




undefined8 FUN_00102294(long param_1)

{
  return *(undefined8 *)(param_1 + 0x10);
}



