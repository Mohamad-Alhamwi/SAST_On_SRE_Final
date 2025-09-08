
void FUN_0010347f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001034b4(param_1,param_2,param_3);
  return;
}




void FUN_00103754(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00103ec0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_0010390e(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_0010372a(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00102dc3(undefined8 param_1,undefined8 param_2)

{
  FUN_00103012(param_1,param_2,0);
  return;
}




undefined8 FUN_001018aa(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_0010319d(undefined8 param_1)

{
  FUN_001031ea(param_1);
  return;
}




void FUN_00102ec6(void)

{
  return;
}




void FUN_00103c0d(void)

{
  return;
}




void FUN_001018c0(undefined8 param_1)

{
  FUN_0010194c(param_1);
  return;
}




void FUN_00102472(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102a58(param_1,param_3);
                    /* try { // try from 001024ac to 001024b0 has its CatchHandler @ 001024b3 */
  FUN_00102a8e(param_1,param_2);
  return;
}




void FUN_00102588(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102ae8(param_1,param_2,param_3);
  return;
}




long FUN_001030d9(void *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove((void *)(lVar1 * -8 + param_3),param_1,lVar1 * 8);
  }
  return param_3 + lVar1 * -8;
}




undefined8 FUN_00102382(long *param_1,long param_2)

{
  long in_FS_OFFSET;
  long local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1 + param_2 * 8;
  FUN_00101d46(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001026be(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102b58(param_1);
  FUN_00102bbd(*param_1,uVar1);
  return;
}




void FUN_001030a8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103282(param_1,param_2,param_3);
  return;
}




void FUN_00102f78(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010314f(param_1,param_2,param_3);
  return;
}




void FUN_00101835(void)

{
  FUN_0010169f();
  return;
}




undefined8 FUN_001031ea(void)

{
  return 0xfffffffffffffff;
}




void FUN_00103800(undefined4 param_1)

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




int FUN_00103b6f(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00102c7a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102ce8(param_3);
  uVar2 = FUN_00102ce8(local_28);
  uVar3 = FUN_00102ce8(local_20);
  uVar1 = FUN_00102f2d(uVar3,uVar2,uVar1);
  FUN_00102f62(&local_30,uVar1);
  return;
}




void FUN_00102754(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102be7(param_2);
  uVar2 = FUN_00102be7(param_1);
  FUN_00102c33(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_0010377f(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_00101d06(undefined8 param_1)

{
  return param_1;
}




void FUN_00102bbd(undefined8 param_1,undefined8 param_2)

{
  FUN_00102ec6(param_1,param_2);
  return;
}




long FUN_00102b58(long param_1)

{
  return param_1 + 8;
}




undefined8 FUN_0010264c(undefined8 param_1)

{
  return param_1;
}




void FUN_00103bd6(void)

{
  return;
}




void FUN_00103012(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_001031ea(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 << 3);
  return;
}




undefined8 FUN_00103c86(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00103c4f,local_18);
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




void FUN_001027fc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102ce8(param_2);
  uVar2 = FUN_00102ce8(param_1);
  FUN_00102cfa(uVar2,uVar1,param_3);
  return;
}




void FUN_00103baa(void)

{
  return;
}




ulong FUN_0010396e(long param_1,ulong param_2,long param_3)

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




undefined8 * FUN_001032d2(undefined8 *param_1,long param_2,undefined8 *param_3)

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




void FUN_001036a4(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_001036d6(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00103c2e(void)

{
  return;
}




void FUN_001037d5(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_00102fa9(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0xfffffffffffffff;
  local_18 = FUN_0010319d(param_1);
  puVar1 = (undefined8 *)FUN_001031bb(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}




void FUN_00103058(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103202(param_2);
  uVar2 = FUN_00103202(param_1);
  FUN_00103214(uVar2,uVar1,param_3);
  return;
}




void FUN_001025ff(undefined8 param_1,undefined8 param_2)

{
  FUN_00102b45(param_1,param_2);
  return;
}




/* WARNING: Removing unreachable block (ram,0x001014a4) */
/* WARNING: Removing unreachable block (ram,0x001014b0) */

void FUN_00101480(void)

{
  return;
}




void * FUN_00103407(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




undefined8 FUN_00101a06(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101d46(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102b80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102b6e(param_3);
  FUN_00102e82(param_1,param_2,uVar1);
  return;
}




undefined8 FUN_00101d7a(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_0010262a(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void * FUN_001034b4(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




void FUN_00103c02(void)

{
  return;
}




void FUN_00102e51(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103058(param_1,param_2,param_3);
  return;
}




void FUN_00102e82(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00102b6e(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_001018aa(8,param_2);
  *puVar2 = uVar1;
  return;
}




undefined8 FUN_00102ce8(undefined8 param_1)

{
  return param_1;
}




void FUN_00102eda(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00103e69(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_001038db(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101d18(undefined8 param_1,undefined8 param_2)

{
  FUN_001025ff(param_1,param_2);
  return;
}




ulong FUN_00103a72(long param_1,ulong param_2,long param_3)

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




void FUN_00102a8e(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_00102972(param_1,param_2);
  *param_1 = lVar1;
  param_1[1] = *param_1;
  param_1[2] = param_2 * 8 + *param_1;
  return;
}




undefined8 FUN_0010331d(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  puVar1 = (undefined8 *)FUN_0010264c(&local_10);
  return *puVar1;
}




undefined8 FUN_00102b6e(undefined8 param_1)

{
  return param_1;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00106ed8)();
  return;
}




void FUN_001037aa(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




undefined8 FUN_00102df1(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102eda(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




bool FUN_00103d53(pthread_t *param_1)

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




void FUN_0010314f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00102ce8(param_1);
  uVar1 = FUN_001032d2(uVar1,param_2,param_3);
  FUN_00102f62(&local_10,uVar1);
  return;
}




void FUN_00102cfa(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *local_20;
  
  uVar1 = *param_3;
  for (local_20 = param_1; local_20 != param_2; local_20 = local_20 + 1) {
    *local_20 = uVar1;
  }
  return;
}




void FUN_00101a56(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00101d68(param_2);
  *param_1 = *puVar1;
  return;
}




undefined8 FUN_00102336(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101d46(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00103202(undefined8 param_1)

{
  return param_1;
}




void FUN_0010385a(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_001035b8(undefined8 param_1)

{
  void *__dest;
  undefined8 *puVar1;
  size_t sVar2;
  long in_FS_OFFSET;
  char local_1b [11];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_0010365a(param_1,2);
  __dest = (void *)*puVar1;
  builtin_strncpy(local_1b,"AAAAAAAAAA",0xb);
  sVar2 = strlen(local_1b);
  memmove(__dest,local_1b,sVar2 + 1);
  FUN_0010367e(__dest);
  free(__dest);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103399(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102ce8(param_3);
  uVar2 = FUN_00102ce8(local_28);
  uVar3 = FUN_00102ce8(local_20);
  uVar1 = FUN_0010347f(uVar3,uVar2,uVar1);
  FUN_00102f62(&local_30,uVar1);
  return;
}




void FUN_00103c4f(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_001019be(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101d06(param_1);
  FUN_00101d18(*param_1,param_1[1],uVar1);
  FUN_0010196c(param_1);
  return;
}




void FUN_00101cbc(void)

{
  return;
}




void FUN_001018e0(undefined8 param_1)

{
  FUN_00101920(param_1);
  return;
}




void FUN_00103bc0(void)

{
  return;
}




void FUN_00101e16(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

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
      local_68 = FUN_00102882(param_1,param_3,"vector::_M_fill_insert");
      local_78 = FUN_00102336(local_80);
      local_60 = FUN_00102710(&local_88,&local_78);
      local_70 = FUN_00102972(local_80,local_68);
      local_58 = local_70;
      uVar1 = FUN_00101d06(local_80);
                    /* try { // try from 00102120 to 001021ab has its CatchHandler @ 00102263 */
      FUN_0010284d(local_60 * 8 + local_58,param_3,param_4,uVar1);
      local_70 = 0;
      uVar1 = FUN_00101d06(local_80);
      puVar2 = (undefined8 *)FUN_00101d68(&local_88);
      local_70 = FUN_001029a9(*local_80,*puVar2,local_58,uVar1);
      local_70 = local_70 + param_3 * 8;
      uVar1 = FUN_00101d06(local_80);
      lVar4 = local_80[1];
      puVar2 = (undefined8 *)FUN_00101d68(&local_88);
      local_70 = FUN_001029a9(*puVar2,lVar4,local_70,uVar1);
      uVar1 = FUN_00101d06(local_80);
      FUN_00101d18(*local_80,local_80[1],uVar1);
      FUN_00101ccc(local_80,*local_80,local_80[2] - *local_80 >> 3);
      *local_80 = local_58;
      local_80[1] = local_70;
      local_80[2] = local_68 * 8 + local_58;
    }
    else {
      FUN_0010265e(local_38,param_1,param_4);
                    /* try { // try from 00101ea0 to 00102073 has its CatchHandler @ 00102245 */
      local_50 = FUN_001026f2(local_38);
      local_78 = FUN_00101a06(local_80);
      local_48 = FUN_00102710(&local_78,&local_88);
      local_40 = local_80[1];
      if (param_3 < local_48) {
        uVar1 = FUN_00101d06(local_80);
        FUN_00102754(param_3 * -8 + local_80[1],local_80[1],local_80[1],uVar1);
        local_80[1] = param_3 * 8 + local_80[1];
        lVar4 = param_3 * -8 + local_40;
        puVar2 = (undefined8 *)FUN_00101d68(&local_88);
        FUN_001027ac(*puVar2,lVar4,local_40);
        plVar3 = (long *)FUN_00101d68(&local_88);
        lVar4 = *plVar3;
        puVar2 = (undefined8 *)FUN_00101d68(&local_88);
        FUN_001027fc(*puVar2,lVar4 + param_3 * 8,local_50);
      }
      else {
        uVar1 = FUN_00101d06(local_80);
        lVar4 = FUN_0010284d(local_80[1],param_3 - local_48,local_50,uVar1);
        local_80[1] = lVar4;
        uVar1 = FUN_00101d06(local_80);
        lVar4 = local_80[1];
        puVar2 = (undefined8 *)FUN_00101d68(&local_88);
        FUN_00102754(*puVar2,local_40,lVar4,uVar1);
        local_80[1] = local_48 * 8 + local_80[1];
        puVar2 = (undefined8 *)FUN_00101d68(&local_88);
        FUN_001027fc(*puVar2,local_40,local_50);
      }
      FUN_001026be(local_38);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102f2d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001030d9(param_1,param_2,param_3);
  return;
}




long FUN_00102710(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00101d68(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00101d68(param_2);
  return lVar1 - *plVar2 >> 3;
}




void FUN_0010196c(long *param_1)

{
  FUN_00101ccc(param_1,*param_1,param_1[2] - *param_1 >> 3);
  FUN_001018c0(param_1);
  return;
}




ulong * FUN_00102d94(ulong *param_1,ulong *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}




undefined8 FUN_00103dae(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_0010367e(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101c8a(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101463) */
/* WARNING: Removing unreachable block (ram,0x0010146f) */

void FUN_00101450(void)

{
  return;
}




long FUN_001023e8(long *param_1)

{
  return param_1[1] - *param_1 >> 3;
}




void FUN_00103bec(void)

{
  return;
}




undefined8 FUN_00103b51(void)

{
  return 1;
}




void FUN_0010333e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103407(param_1,param_2,param_3);
  return;
}




void FUN_00101509(void)

{
  long in_FS_OFFSET;
  void *local_68;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101900(local_58);
  local_68 = (void *)0x0;
  local_68 = malloc(10);
  if (local_68 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  local_60 = FUN_00101a06(local_58);
  FUN_00101a56(local_38,&local_60);
                    /* try { // try from 00101594 to 00101629 has its CatchHandler @ 00101675 */
  FUN_00101a84(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101a06(local_58);
  FUN_00101a56(local_38,&local_60);
  FUN_00101a84(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101a06(local_58);
  FUN_00101a56(local_38,&local_60);
  FUN_00101a84(local_58,local_38[0],1,&local_68);
  FUN_00101b4a(local_38,local_58);
                    /* try { // try from 00101631 to 00101635 has its CatchHandler @ 00101660 */
  FUN_00103517(local_38);
  FUN_001019be(local_38);
  FUN_001019be(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102be7(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102eda(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102ef8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001030a8(param_1,param_2,param_3);
  return;
}




void FUN_001036fe(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_00101d68(undefined8 param_1)

{
  return param_1;
}




ulong FUN_00102882(undefined8 param_1,ulong param_2,char *param_3)

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
  lVar1 = FUN_00102d6e(param_1);
  lVar2 = FUN_001023e8(local_40);
  if ((ulong)(lVar1 - lVar2) < local_48) {
    std::__throw_length_error(param_3);
  }
  lVar1 = FUN_001023e8(local_40);
  local_30 = FUN_001023e8(local_40);
  plVar3 = (long *)FUN_00102d94(&local_30,&local_48);
  local_28 = *plVar3 + lVar1;
  uVar4 = FUN_001023e8(local_40);
  if ((local_28 < uVar4) || (uVar5 = FUN_00102d6e(local_40), uVar4 = local_28, uVar5 < local_28)) {
    uVar4 = FUN_00102d6e(local_40);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00103dd1(undefined8 *param_1)

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




void FUN_00103e88(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
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




void FUN_0010284d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102d38(param_1,param_2,param_3);
  return;
}




void FUN_0010194c(undefined8 param_1)

{
  FUN_00101cbc(param_1);
  return;
}




void FUN_00103c39(void)

{
  return;
}




void FUN_00101a84(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  local_20 = FUN_00101d7a(param_1);
  local_18 = FUN_00101dd1(&local_38,&local_20);
  local_20 = FUN_00102336(local_30);
  uVar1 = FUN_00102382(&local_20,local_18);
  FUN_00101e16(local_30,uVar1,param_3,param_4);
  local_20 = FUN_00102336(local_30);
  FUN_00102382(&local_20,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




ulong * FUN_001031bb(ulong *param_1,ulong *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_00102b45(void)

{
  return;
}




void FUN_00103b9f(void)

{
  return;
}




void FUN_00103be1(void)

{
  return;
}




undefined8 FUN_00102a01(undefined8 param_1,undefined8 param_2)

{
  FUN_00102a2e(param_1,param_2);
  return param_1;
}




void FUN_00102c33(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102ef8(param_1,param_2,param_3);
  return;
}




void FUN_00103882(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00103373(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_0010346a(&local_10);
  FUN_00102c68(uVar1);
  return;
}




void FUN_00103c23(void)

{
  return;
}




void FUN_00102a2e(undefined8 param_1,undefined8 param_2)

{
  FUN_00102e3e(param_1,param_2);
  return;
}




void FUN_00103c44(void)

{
  return;
}




undefined8 FUN_00103b60(void)

{
  return 0;
}




void FUN_00101920(undefined8 param_1)

{
  FUN_00101c6a(param_1);
  FUN_00101c8a(param_1);
  return;
}




undefined8 FUN_00102c68(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102f62(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00103bf7(void)

{
  return;
}




void FUN_00101900(undefined8 param_1)

{
  FUN_001018e0(param_1);
  return;
}




void FUN_00102b1e(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00103282(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103373(param_2);
  uVar2 = FUN_00103373(param_1);
  FUN_00103399(uVar2,uVar1,param_3);
  return;
}




undefined8 FUN_0010346a(undefined8 *param_1)

{
  return *param_1;
}




void FUN_00102a58(undefined8 param_1,undefined8 param_2)

{
  FUN_00102a2e(param_1,param_2);
  FUN_00101c8a(param_1);
  return;
}




long FUN_0010365a(long *param_1,long param_2)

{
  return *param_1 + param_2 * 8;
}




void FUN_00101ccc(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FUN_001025cd(param_1,param_2,param_3);
  }
  return;
}




long FUN_00101dd1(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_0010264c(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_0010264c(param_2);
  return lVar1 - *plVar2 >> 3;
}




void FUN_00102d38(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102f78(param_1,param_2,param_3);
  return;
}




void FUN_0010169f(void)

{
  long in_FS_OFFSET;
  void *local_68;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101900(local_58);
  local_68 = (void *)0x0;
  local_68 = malloc(0xb);
  if (local_68 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  local_60 = FUN_00101a06(local_58);
  FUN_00101a56(local_38,&local_60);
                    /* try { // try from 0010172a to 001017bf has its CatchHandler @ 0010180b */
  FUN_00101a84(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101a06(local_58);
  FUN_00101a56(local_38,&local_60);
  FUN_00101a84(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101a06(local_58);
  FUN_00101a56(local_38,&local_60);
  FUN_00101a84(local_58,local_38[0],1,&local_68);
  FUN_00101b4a(local_38,local_58);
                    /* try { // try from 001017c7 to 001017cb has its CatchHandler @ 001017f6 */
  FUN_001035b8(local_38);
  FUN_001019be(local_38);
  FUN_001019be(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103bcb(void)

{
  return;
}




void FUN_00101b4a(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102460(param_2);
  FUN_0010240f(&local_31,uVar1);
  uVar1 = FUN_001023e8(param_2);
                    /* try { // try from 00101bb0 to 00101bb4 has its CatchHandler @ 00101c1d */
  FUN_00102472(param_1,uVar1,&local_31);
  FUN_0010194c(&local_31);
  uVar2 = FUN_00101d06(param_1);
  uVar1 = *param_1;
  uVar3 = FUN_00102530(param_2);
  uVar4 = FUN_001024d8(param_2);
                    /* try { // try from 00101bfe to 00101c02 has its CatchHandler @ 00101c3b */
  uVar1 = FUN_00102588(uVar4,uVar3,uVar1,uVar2);
  param_1[1] = uVar1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00101845(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_0010367e("Calling good()...");
  FUN_00101835();
  FUN_0010367e("Finished good()");
  FUN_0010367e("Calling bad()...");
  FUN_00101509();
  FUN_0010367e("Finished bad()");
  return 0;
}




void FUN_00101d46(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_001029a9(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102df1(param_2);
  uVar2 = FUN_00102df1(param_1);
  FUN_00102c33(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_00103bb5(void)

{
  return;
}




void FUN_00103c18(void)

{
  return;
}




void FUN_001026f2(undefined8 param_1)

{
  FUN_00102b58(param_1);
  return;
}




void FUN_001027ac(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102c68(param_2);
  uVar2 = FUN_00102c68(param_1);
  FUN_00102c7a(uVar2,uVar1,param_3);
  return;
}




undefined8 FUN_00102972(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00102dc3(param_1,param_2);
  }
  return uVar1;
}




void FUN_00101c6a(undefined8 param_1)

{
  FUN_001025be(param_1);
  return;
}




void FUN_00103b94(void)

{
  return;
}




void FUN_00103517(undefined8 param_1)

{
  void *__dest;
  undefined8 *puVar1;
  size_t sVar2;
  long in_FS_OFFSET;
  char local_1b [11];
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_0010365a(param_1,2);
  __dest = (void *)*puVar1;
  builtin_strncpy(local_1b,"AAAAAAAAAA",0xb);
  sVar2 = strlen(local_1b);
  memmove(__dest,local_1b,sVar2 + 1);
  FUN_0010367e(__dest);
  free(__dest);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_001024d8(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_0010262a(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103f30(void)

{
  return;
}




undefined8 FUN_00102460(undefined8 param_1)

{
  return param_1;
}




void FUN_0010262a(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00103214(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102ce8(param_3);
  uVar2 = FUN_0010331d(local_28);
  uVar3 = FUN_0010331d(local_20);
  uVar1 = FUN_0010333e(uVar3,uVar2,uVar1);
  FUN_00102f62(&local_30,uVar1);
  return;
}




void FUN_001025cd(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102b1e(param_1,param_2,param_3);
  return;
}




undefined8 FUN_0010240f(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102a01(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_001038ad(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_001025be(void)

{
  return;
}




void FUN_00102d6e(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102460(param_1);
  FUN_00102fa9(uVar1);
  return;
}




void FUN_00102ae8(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102e51(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00102530(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(undefined8 *)(param_1 + 8);
  FUN_0010262a(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103b89(void)

{
  return;
}




void FUN_00103e4a(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_0010265e(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar1 = FUN_00102b6e(param_3);
  uVar2 = FUN_00102b58(param_1);
  FUN_00102b80(*param_1,uVar2,uVar1);
  return;
}




void FUN_00102e3e(void)

{
  return;
}



