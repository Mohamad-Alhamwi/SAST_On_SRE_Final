
void FUN_00103511(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103546(param_1,param_2,param_3);
  return;
}




void FUN_00103700(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_00103a7c(void)

{
  return 1;
}




void FUN_001036d5(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00102e55(undefined8 param_1,undefined8 param_2)

{
  FUN_001030a4(param_1,param_2,0);
  return;
}




undefined8 FUN_0010193b(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_0010322f(undefined8 param_1)

{
  FUN_0010327c(param_1);
  return;
}




void FUN_00102f58(void)

{
  return;
}




void FUN_00103b59(void)

{
  return;
}




void FUN_00101952(undefined8 param_1)

{
  FUN_001019de(param_1);
  return;
}




void FUN_00102504(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102aea(param_1,param_3);
                    /* try { // try from 0010253e to 00102542 has its CatchHandler @ 00102545 */
  FUN_00102b20(param_1,param_2);
  return;
}




void FUN_0010261a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102b7a(param_1,param_2,param_3);
  return;
}




long FUN_0010316b(void *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove((void *)(lVar1 * -8 + param_3),param_1,lVar1 * 8);
  }
  return param_3 + lVar1 * -8;
}




undefined8 FUN_00102414(long *param_1,long param_2)

{
  long in_FS_OFFSET;
  long local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1 + param_2 * 8;
  FUN_00101dd8(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102750(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102bea(param_1);
  FUN_00102c4f(*param_1,uVar1);
  return;
}




void FUN_0010313a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103314(param_1,param_2,param_3);
  return;
}




void FUN_0010300a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001031e1(param_1,param_2,param_3);
  return;
}




void FUN_001018c6(void)

{
  FUN_0010173e();
  return;
}




undefined8 FUN_0010327c(void)

{
  return 0xfffffffffffffff;
}




void FUN_001037d8(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00106ee0)();
  return;
}




void FUN_00103aca(void)

{
  return;
}




void FUN_00102d0c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102d7a(param_3);
  uVar2 = FUN_00102d7a(local_28);
  uVar3 = FUN_00102d7a(local_20);
  uVar1 = FUN_00102fbf(uVar3,uVar2,uVar1);
  FUN_00102ff4(&local_30,uVar1);
  return;
}




void FUN_001027e6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102c79(param_2);
  uVar2 = FUN_00102c79(param_1);
  FUN_00102cc5(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_0010372b(undefined4 param_1)

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




undefined8 FUN_00101d98(undefined8 param_1)

{
  return param_1;
}




void FUN_00102c4f(undefined8 param_1,undefined8 param_2)

{
  FUN_00102f58(param_1,param_2);
  return;
}




long FUN_00102bea(long param_1)

{
  return param_1 + 8;
}




undefined8 FUN_001026de(undefined8 param_1)

{
  return param_1;
}




void FUN_00103b22(void)

{
  return;
}




void FUN_001030a4(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_0010327c(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 << 3);
  return;
}




undefined8 FUN_00103cfc(undefined8 *param_1)

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




void FUN_0010288e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102d7a(param_2);
  uVar2 = FUN_00102d7a(param_1);
  FUN_00102d8c(uVar2,uVar1,param_3);
  return;
}




void FUN_00103af6(void)

{
  return;
}




undefined8 FUN_00103a8b(void)

{
  return 0;
}




undefined8 * FUN_00103364(undefined8 *param_1,long param_2,undefined8 *param_3)

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




void FUN_00103655(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_0010367f(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00103b7a(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_001037ad(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




undefined8 FUN_0010303b(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0xfffffffffffffff;
  local_18 = FUN_0010322f(param_1);
  puVar1 = (undefined8 *)FUN_0010324d(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}




void FUN_001030ea(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103294(param_2);
  uVar2 = FUN_00103294(param_1);
  FUN_001032a6(uVar2,uVar1,param_3);
  return;
}




void FUN_00102691(undefined8 param_1,undefined8 param_2)

{
  FUN_00102bd7(param_1,param_2);
  return;
}




void FUN_0010153a(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00101592(param_1,2);
  puVar1 = (undefined8 *)*puVar1;
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 5;
    FUN_001036aa(*puVar1);
    free(puVar1);
  }
  return;
}




void * FUN_00103499(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




undefined8 FUN_00101a98(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101dd8(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102c12(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102c00(param_3);
  FUN_00102f14(param_1,param_2,uVar1);
  return;
}




undefined8 FUN_00101e0c(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_001026bc(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void * FUN_00103546(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




void FUN_00103b4e(void)

{
  return;
}




void FUN_00102ee3(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001030ea(param_1,param_2,param_3);
  return;
}




void FUN_00102f14(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00102c00(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_0010193b(8,param_2);
  *puVar2 = uVar1;
  return;
}




undefined8 FUN_00102d7a(undefined8 param_1)

{
  return param_1;
}




void FUN_00102f6c(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00103e50(void)

{
  return;
}




ulong FUN_0010399d(long param_1,ulong param_2,long param_3)

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




void FUN_00101daa(undefined8 param_1,undefined8 param_2)

{
  FUN_00102691(param_1,param_2);
  return;
}




int FUN_00103a9a(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00102b20(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_00102a04(param_1,param_2);
  *param_1 = lVar1;
  param_1[1] = *param_1;
  param_1[2] = param_2 * 8 + *param_1;
  return;
}




undefined8 FUN_001033af(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  puVar1 = (undefined8 *)FUN_001026de(&local_10);
  return *puVar1;
}




void _FINI_0(void)

{
  if (DAT_00107020 == '\0') {
    if (PTR___cxa_finalize_00106fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00107008);
    }
    FUN_00101430();
    DAT_00107020 = 1;
    return;
  }
  return;
}




undefined8 FUN_00102c00(undefined8 param_1)

{
  return param_1;
}




/* WARNING: Removing unreachable block (ram,0x00101484) */
/* WARNING: Removing unreachable block (ram,0x00101490) */

void FUN_00101460(void)

{
  return;
}




void FUN_00103785(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




undefined8 FUN_00102e83(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102f6c(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103d75(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_001031e1(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00102d7a(param_1);
  uVar1 = FUN_00103364(uVar1,param_2,param_3);
  FUN_00102ff4(&local_10,uVar1);
  return;
}




void FUN_00102d8c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *local_20;
  
  uVar1 = *param_3;
  for (local_20 = param_1; local_20 != param_2; local_20 = local_20 + 1) {
    *local_20 = uVar1;
  }
  return;
}




void FUN_00101ae8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00101dfa(param_2);
  *param_1 = *puVar1;
  return;
}




undefined8 FUN_001023c8(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101dd8(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00103294(undefined8 param_1)

{
  return param_1;
}




void FUN_00103806(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_001035cf(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_0010342b(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102d7a(param_3);
  uVar2 = FUN_00102d7a(local_28);
  uVar3 = FUN_00102d7a(local_20);
  uVar1 = FUN_00103511(uVar3,uVar2,uVar1);
  FUN_00102ff4(&local_30,uVar1);
  return;
}




undefined8 FUN_00103cd9(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00101a50(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101d98(param_1);
  FUN_00101daa(*param_1,param_1[1],uVar1);
  FUN_001019fe(param_1);
  return;
}




void FUN_00101d4e(void)

{
  return;
}




void FUN_00101972(undefined8 param_1)

{
  FUN_001019b2(param_1);
  return;
}




void FUN_00103b0c(void)

{
  return;
}




void FUN_00101ea8(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

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
      local_68 = FUN_00102914(param_1,param_3,"vector::_M_fill_insert");
      local_78 = FUN_001023c8(local_80);
      local_60 = FUN_001027a2(&local_88,&local_78);
      local_70 = FUN_00102a04(local_80,local_68);
      local_58 = local_70;
      uVar1 = FUN_00101d98(local_80);
                    /* try { // try from 001021b2 to 0010223d has its CatchHandler @ 001022f5 */
      FUN_001028df(local_60 * 8 + local_58,param_3,param_4,uVar1);
      local_70 = 0;
      uVar1 = FUN_00101d98(local_80);
      puVar2 = (undefined8 *)FUN_00101dfa(&local_88);
      local_70 = FUN_00102a3b(*local_80,*puVar2,local_58,uVar1);
      local_70 = local_70 + param_3 * 8;
      uVar1 = FUN_00101d98(local_80);
      lVar4 = local_80[1];
      puVar2 = (undefined8 *)FUN_00101dfa(&local_88);
      local_70 = FUN_00102a3b(*puVar2,lVar4,local_70,uVar1);
      uVar1 = FUN_00101d98(local_80);
      FUN_00101daa(*local_80,local_80[1],uVar1);
      FUN_00101d5e(local_80,*local_80,local_80[2] - *local_80 >> 3);
      *local_80 = local_58;
      local_80[1] = local_70;
      local_80[2] = local_68 * 8 + local_58;
    }
    else {
      FUN_001026f0(local_38,param_1,param_4);
                    /* try { // try from 00101f32 to 00102105 has its CatchHandler @ 001022d7 */
      local_50 = FUN_00102784(local_38);
      local_78 = FUN_00101a98(local_80);
      local_48 = FUN_001027a2(&local_78,&local_88);
      local_40 = local_80[1];
      if (param_3 < local_48) {
        uVar1 = FUN_00101d98(local_80);
        FUN_001027e6(param_3 * -8 + local_80[1],local_80[1],local_80[1],uVar1);
        local_80[1] = param_3 * 8 + local_80[1];
        lVar4 = param_3 * -8 + local_40;
        puVar2 = (undefined8 *)FUN_00101dfa(&local_88);
        FUN_0010283e(*puVar2,lVar4,local_40);
        plVar3 = (long *)FUN_00101dfa(&local_88);
        lVar4 = *plVar3;
        puVar2 = (undefined8 *)FUN_00101dfa(&local_88);
        FUN_0010288e(*puVar2,lVar4 + param_3 * 8,local_50);
      }
      else {
        uVar1 = FUN_00101d98(local_80);
        lVar4 = FUN_001028df(local_80[1],param_3 - local_48,local_50,uVar1);
        local_80[1] = lVar4;
        uVar1 = FUN_00101d98(local_80);
        lVar4 = local_80[1];
        puVar2 = (undefined8 *)FUN_00101dfa(&local_88);
        FUN_001027e6(*puVar2,local_40,lVar4,uVar1);
        local_80[1] = local_48 * 8 + local_80[1];
        puVar2 = (undefined8 *)FUN_00101dfa(&local_88);
        FUN_0010288e(*puVar2,local_40,local_50);
      }
      FUN_00102750(local_38);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102fbf(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010316b(param_1,param_2,param_3);
  return;
}




long FUN_001027a2(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00101dfa(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00101dfa(param_2);
  return lVar1 - *plVar2 >> 3;
}




void FUN_001019fe(long *param_1)

{
  FUN_00101d5e(param_1,*param_1,param_1[2] - *param_1 >> 3);
  FUN_00101952(param_1);
  return;
}




ulong * FUN_00102e26(ulong *param_1,ulong *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_00103d94(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00103629(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101d1c(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




void FUN_001014e9(undefined8 param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00101592(param_1,2);
  puVar1 = (undefined8 *)*puVar1;
  *puVar1 = 5;
  FUN_001036aa(*puVar1);
  free(puVar1);
  return;
}




long FUN_0010247a(long *param_1)

{
  return param_1[1] - *param_1 >> 3;
}




void FUN_00103b38(void)

{
  return;
}




void FUN_00103ab4(void)

{
  return;
}




void FUN_001033d0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103499(param_1,param_2,param_3);
  return;
}




void FUN_001015b6(void)

{
  long in_FS_OFFSET;
  void *local_68;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101992(local_58);
  local_68 = (void *)0x0;
  local_68 = calloc(1,8);
  local_60 = FUN_00101a98(local_58);
  FUN_00101ae8(local_38,&local_60);
                    /* try { // try from 00101633 to 001016c8 has its CatchHandler @ 00101714 */
  FUN_00101b16(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101a98(local_58);
  FUN_00101ae8(local_38,&local_60);
  FUN_00101b16(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101a98(local_58);
  FUN_00101ae8(local_38,&local_60);
  FUN_00101b16(local_58,local_38[0],1,&local_68);
  FUN_00101bdc(local_38,local_58);
                    /* try { // try from 001016d0 to 001016d4 has its CatchHandler @ 001016ff */
  FUN_001014e9(local_38);
  FUN_00101a50(local_38);
  FUN_00101a50(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00102c79(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102f6c(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102f8a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010313a(param_1,param_2,param_3);
  return;
}




void FUN_001036aa(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_00101dfa(undefined8 param_1)

{
  return param_1;
}




ulong FUN_00102914(undefined8 param_1,ulong param_2,char *param_3)

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
  lVar1 = FUN_00102e00(param_1);
  lVar2 = FUN_0010247a(local_40);
  if ((ulong)(lVar1 - lVar2) < local_48) {
    std::__throw_length_error(param_3);
  }
  lVar1 = FUN_0010247a(local_40);
  local_30 = FUN_0010247a(local_40);
  plVar3 = (long *)FUN_00102e26(&local_30,&local_48);
  local_28 = *plVar3 + lVar1;
  uVar4 = FUN_0010247a(local_40);
  if ((local_28 < uVar4) || (uVar5 = FUN_00102e00(local_40), uVar4 = local_28, uVar5 < local_28)) {
    uVar4 = FUN_00102e00(local_40);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00103db3(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




long FUN_00101592(long *param_1,long param_2)

{
  return *param_1 + param_2 * 8;
}




void FUN_001028df(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102dca(param_1,param_2,param_3);
  return;
}




void FUN_001019de(undefined8 param_1)

{
  FUN_00101d4e(param_1);
  return;
}




undefined8 FUN_00103bb1(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00103b7a,local_18);
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




void FUN_00101b16(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  local_20 = FUN_00101e0c(param_1);
  local_18 = FUN_00101e63(&local_38,&local_20);
  local_20 = FUN_001023c8(local_30);
  uVar1 = FUN_00102414(&local_20,local_18);
  FUN_00101ea8(local_30,uVar1,param_3,param_4);
  local_20 = FUN_001023c8(local_30);
  FUN_00102414(&local_20,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




ulong * FUN_0010324d(ulong *param_1,ulong *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_00102bd7(void)

{
  return;
}




void FUN_00103aeb(void)

{
  return;
}




void FUN_00103b2d(void)

{
  return;
}




undefined8 FUN_00102a93(undefined8 param_1,undefined8 param_2)

{
  FUN_00102ac0(param_1,param_2);
  return param_1;
}




void FUN_00102cc5(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102f8a(param_1,param_2,param_3);
  return;
}




void FUN_00103839(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00103405(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_001034fc(&local_10);
  FUN_00102cfa(uVar1);
  return;
}




void FUN_00103b6f(void)

{
  return;
}




void FUN_00102ac0(undefined8 param_1,undefined8 param_2)

{
  FUN_00102ed0(param_1,param_2);
  return;
}




bool FUN_00103c7e(pthread_t *param_1)

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




void FUN_00103abf(void)

{
  return;
}




void FUN_001019b2(undefined8 param_1)

{
  FUN_00101cfc(param_1);
  FUN_00101d1c(param_1);
  return;
}




undefined8 FUN_00102cfa(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102ff4(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00103b43(void)

{
  return;
}




void FUN_00101992(undefined8 param_1)

{
  FUN_00101972(param_1);
  return;
}




void FUN_00102bb0(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00103314(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103405(param_2);
  uVar2 = FUN_00103405(param_1);
  FUN_0010342b(uVar2,uVar1,param_3);
  return;
}




undefined8 FUN_001034fc(undefined8 *param_1)

{
  return *param_1;
}




void FUN_00102aea(undefined8 param_1,undefined8 param_2)

{
  FUN_00102ac0(param_1,param_2);
  FUN_00101d1c(param_1);
  return;
}




void FUN_00103601(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_00101d5e(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FUN_0010265f(param_1,param_2,param_3);
  }
  return;
}




long FUN_00101e63(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_001026de(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_001026de(param_2);
  return lVar1 - *plVar2 >> 3;
}




void FUN_00102dca(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010300a(param_1,param_2,param_3);
  return;
}




void FUN_0010173e(void)

{
  long in_FS_OFFSET;
  void *local_68;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101992(local_58);
  local_68 = (void *)0x0;
  local_68 = calloc(1,8);
  local_60 = FUN_00101a98(local_58);
  FUN_00101ae8(local_38,&local_60);
                    /* try { // try from 001017bb to 00101850 has its CatchHandler @ 0010189c */
  FUN_00101b16(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101a98(local_58);
  FUN_00101ae8(local_38,&local_60);
  FUN_00101b16(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101a98(local_58);
  FUN_00101ae8(local_38,&local_60);
  FUN_00101b16(local_58,local_38[0],1,&local_68);
  FUN_00101bdc(local_38,local_58);
                    /* try { // try from 00101858 to 0010185c has its CatchHandler @ 00101887 */
  FUN_0010153a(local_38);
  FUN_00101a50(local_38);
  FUN_00101a50(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103b17(void)

{
  return;
}




void FUN_00101bdc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_001024f2(param_2);
  FUN_001024a1(&local_31,uVar1);
  uVar1 = FUN_0010247a(param_2);
                    /* try { // try from 00101c42 to 00101c46 has its CatchHandler @ 00101caf */
  FUN_00102504(param_1,uVar1,&local_31);
  FUN_001019de(&local_31);
  uVar2 = FUN_00101d98(param_1);
  uVar1 = *param_1;
  uVar3 = FUN_001025c2(param_2);
  uVar4 = FUN_0010256a(param_2);
                    /* try { // try from 00101c90 to 00101c94 has its CatchHandler @ 00101ccd */
  uVar1 = FUN_0010261a(uVar4,uVar3,uVar1,uVar2);
  param_1[1] = uVar1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_001018d6(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001035a9("Calling good()...");
  FUN_001018c6();
  FUN_001035a9("Finished good()");
  FUN_001035a9("Calling bad()...");
  FUN_001015b6();
  FUN_001035a9("Finished bad()");
  return 0;
}




void FUN_00101dd8(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00102a3b(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102e83(param_2);
  uVar2 = FUN_00102e83(param_1);
  FUN_00102cc5(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_00103b01(void)

{
  return;
}




void FUN_00103b64(void)

{
  return;
}




void FUN_00102784(undefined8 param_1)

{
  FUN_00102bea(param_1);
  return;
}




void FUN_0010283e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102cfa(param_2);
  uVar2 = FUN_00102cfa(param_1);
  FUN_00102d0c(uVar2,uVar1,param_3);
  return;
}




undefined8 FUN_00102a04(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00102e55(param_1,param_2);
  }
  return uVar1;
}




/* WARNING: Removing unreachable block (ram,0x00101443) */
/* WARNING: Removing unreachable block (ram,0x0010144f) */

void FUN_00101430(void)

{
  return;
}




void FUN_00101cfc(undefined8 param_1)

{
  FUN_00102650(param_1);
  return;
}




void FUN_00103ae0(void)

{
  return;
}




void FUN_001035a9(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




undefined8 FUN_0010256a(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_001026bc(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_001024f2(undefined8 param_1)

{
  return param_1;
}




void FUN_001026bc(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_001032a6(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102d7a(param_3);
  uVar2 = FUN_001033af(local_28);
  uVar3 = FUN_001033af(local_20);
  uVar1 = FUN_001033d0(uVar3,uVar2,uVar1);
  FUN_00102ff4(&local_30,uVar1);
  return;
}




void FUN_0010265f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102bb0(param_1,param_2,param_3);
  return;
}




undefined8 FUN_001024a1(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102a93(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




ulong FUN_00103899(long param_1,ulong param_2,long param_3)

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




void FUN_00102650(void)

{
  return;
}




void FUN_00102e00(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001024f2(param_1);
  FUN_0010303b(uVar1);
  return;
}




void FUN_00102b7a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102ee3(param_1,param_2,param_3);
  return;
}




undefined8 FUN_001025c2(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(undefined8 *)(param_1 + 8);
  FUN_001026bc(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103ad5(void)

{
  return;
}




void FUN_00103de0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_001026f0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar1 = FUN_00102c00(param_3);
  uVar2 = FUN_00102bea(param_1);
  FUN_00102c12(*param_1,uVar2,uVar1);
  return;
}




void FUN_00102ed0(void)

{
  return;
}



