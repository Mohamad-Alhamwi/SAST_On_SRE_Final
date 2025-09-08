
void FUN_001027d8(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




ulong FUN_00102a30(undefined8 param_1,ulong param_2,char *param_3)

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
  lVar1 = FUN_00102f18(param_1);
  lVar2 = FUN_00102596(local_40);
  if ((ulong)(lVar1 - lVar2) < local_48) {
    std::__throw_length_error(param_3);
  }
  lVar1 = FUN_00102596(local_40);
  local_30 = FUN_00102596(local_40);
  plVar3 = (long *)FUN_00102f3e(&local_30,&local_48);
  local_28 = *plVar3 + lVar1;
  uVar4 = FUN_00102596(local_40);
  if ((local_28 < uVar4) || (uVar5 = FUN_00102f18(local_40), uVar4 = local_28, uVar5 < local_28)) {
    uVar4 = FUN_00102f18(local_40);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




ulong * FUN_00103363(ulong *param_1,ulong *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_00103c4a(void)

{
  return;
}




void FUN_00102cf3(void)

{
  return;
}




void FUN_001029fb(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102ee2(param_1,param_2,param_3);
  return;
}




void FUN_00101afa(undefined8 param_1)

{
  FUN_00101e6a(param_1);
  return;
}




void FUN_00101fc4(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

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
      local_68 = FUN_00102a30(param_1,param_3,"vector::_M_fill_insert");
      local_78 = FUN_001024e4(local_80);
      local_60 = FUN_001028be(&local_88,&local_78);
      local_70 = FUN_00102b20(local_80,local_68);
      local_58 = local_70;
      uVar1 = FUN_00101eb4(local_80);
                    /* try { // try from 001022ce to 00102359 has its CatchHandler @ 00102411 */
      FUN_001029fb(local_60 * 4 + local_58,param_3,param_4,uVar1);
      local_70 = 0;
      uVar1 = FUN_00101eb4(local_80);
      puVar2 = (undefined8 *)FUN_00101f16(&local_88);
      local_70 = FUN_00102b57(*local_80,*puVar2,local_58,uVar1);
      local_70 = local_70 + param_3 * 4;
      uVar1 = FUN_00101eb4(local_80);
      lVar4 = local_80[1];
      puVar2 = (undefined8 *)FUN_00101f16(&local_88);
      local_70 = FUN_00102b57(*puVar2,lVar4,local_70,uVar1);
      uVar1 = FUN_00101eb4(local_80);
      FUN_00101ec6(*local_80,local_80[1],uVar1);
      FUN_00101e7a(local_80,*local_80,local_80[2] - *local_80 >> 2);
      *local_80 = local_58;
      local_80[1] = local_70;
      local_80[2] = local_68 * 4 + local_58;
    }
    else {
      FUN_0010280c(local_38,param_1,param_4);
                    /* try { // try from 0010204e to 00102221 has its CatchHandler @ 001023f3 */
      local_50 = FUN_001028a0(local_38);
      local_78 = FUN_00101bb4(local_80);
      local_48 = FUN_001028be(&local_78,&local_88);
      local_40 = local_80[1];
      if (param_3 < local_48) {
        uVar1 = FUN_00101eb4(local_80);
        FUN_00102902(param_3 * -4 + local_80[1],local_80[1],local_80[1],uVar1);
        local_80[1] = param_3 * 4 + local_80[1];
        lVar4 = param_3 * -4 + local_40;
        puVar2 = (undefined8 *)FUN_00101f16(&local_88);
        FUN_0010295a(*puVar2,lVar4,local_40);
        plVar3 = (long *)FUN_00101f16(&local_88);
        lVar4 = *plVar3;
        puVar2 = (undefined8 *)FUN_00101f16(&local_88);
        FUN_001029aa(*puVar2,lVar4 + param_3 * 4,local_50);
      }
      else {
        uVar1 = FUN_00101eb4(local_80);
        lVar4 = FUN_001029fb(local_80[1],param_3 - local_48,local_50,uVar1);
        local_80[1] = lVar4;
        uVar1 = FUN_00101eb4(local_80);
        lVar4 = local_80[1];
        puVar2 = (undefined8 *)FUN_00101f16(&local_88);
        FUN_00102902(*puVar2,local_40,lVar4,uVar1);
        local_80[1] = local_48 * 4 + local_80[1];
        puVar2 = (undefined8 *)FUN_00101f16(&local_88);
        FUN_001029aa(*puVar2,local_40,local_50);
      }
      FUN_0010286c(local_38);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




undefined8 FUN_00103e0e(undefined8 *param_1)

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




void FUN_00101c32(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  local_20 = FUN_00101f28(param_1);
  local_18 = FUN_00101f7f(&local_38,&local_20);
  local_20 = FUN_001024e4(local_30);
  uVar1 = FUN_00102530(&local_20,local_18);
  FUN_00101fc4(local_30,uVar1,param_3,param_4);
  local_20 = FUN_001024e4(local_30);
  FUN_00102530(&local_20,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010302c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  
  puVar2 = (undefined4 *)FUN_00102d1c(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined4 *)FUN_00101a58(4,param_2);
  *puVar2 = uVar1;
  return;
}




undefined8 FUN_00101f28(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_001027d8(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00101f16(undefined8 param_1)

{
  return param_1;
}




void FUN_00103ec5(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00103c8c(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00103ea6(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00103918(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101e7a(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FUN_0010277b(param_1,param_2,param_3);
  }
  return;
}




void FUN_0010373b(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_00102530(long *param_1,long param_2)

{
  long in_FS_OFFSET;
  long local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1 + param_2 * 4;
  FUN_00101ef4(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103c76(void)

{
  return;
}




void FUN_00102bdc(undefined8 param_1,undefined8 param_2)

{
  FUN_00102fe8(param_1,param_2);
  return;
}




void FUN_00103e87(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




undefined8 FUN_00102d95(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103082(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_001019f3(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_001036bb("Calling good()...");
  FUN_001019e3();
  FUN_001036bb("Finished good()");
  FUN_001036bb("Calling bad()...");
  FUN_001016a0();
  FUN_001036bb("Finished bad()");
  return 0;
}




undefined8 FUN_00102b20(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00102f6d(param_1,param_2);
  }
  return uVar1;
}




long FUN_0010167c(long *param_1,long param_2)

{
  return *param_1 + param_2 * 4;
}




void FUN_00103bf2(void)

{
  return;
}




void _FINI_0(void)

{
  if (DAT_00107028 == '\0') {
    if (PTR___cxa_finalize_00106fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00107008);
    }
    FUN_00101490();
    DAT_00107028 = 1;
    return;
  }
  return;
}




ulong * FUN_00102f3e(ulong *param_1,ulong *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_0010394b(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00101ec6(undefined8 param_1,undefined8 param_2)

{
  FUN_001027ad(param_1,param_2);
  return;
}




undefined8 FUN_00103151(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0x1fffffffffffffff;
  local_18 = FUN_00103345(param_1);
  puVar1 = (undefined8 *)FUN_00103363(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}




void FUN_00103c29(void)

{
  return;
}




undefined8 FUN_001033aa(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102e96(undefined8 param_1)

{
  return param_1;
}




void FUN_00103c13(void)

{
  return;
}




long FUN_00102d06(long param_1)

{
  return param_1 + 8;
}




void FUN_00102620(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102c06(param_1,param_3);
                    /* try { // try from 0010265a to 0010265e has its CatchHandler @ 00102661 */
  FUN_00102c3c(param_1,param_2);
  return;
}




void FUN_00102902(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102d95(param_2);
  uVar2 = FUN_00102d95(param_1);
  FUN_00102de1(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_001033bc(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102e96(param_3);
  uVar2 = FUN_001034c1(local_28);
  uVar3 = FUN_001034c1(local_20);
  uVar1 = FUN_001034e2(uVar3,uVar2,uVar1);
  FUN_0010310a(&local_30,uVar1);
  return;
}




void FUN_0010295a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102e16(param_2);
  uVar2 = FUN_00102e16(param_1);
  FUN_00102e28(uVar2,uVar1,param_3);
  return;
}




void FUN_001030a0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103250(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00102baf(undefined8 param_1,undefined8 param_2)

{
  FUN_00102bdc(param_1,param_2);
  return param_1;
}




undefined8 FUN_00101eb4(undefined8 param_1)

{
  return param_1;
}




void FUN_00101ef4(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_0010277b(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102ccc(param_1,param_2,param_3);
  return;
}




void FUN_00103812(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001015e2(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  ulong local_20;
  
  piVar2 = (int *)FUN_0010167c(param_1,2);
  iVar1 = *piVar2;
  puVar3 = (undefined4 *)operator_new__((long)iVar1 << 2);
  for (local_20 = 0; local_20 < (ulong)(long)iVar1; local_20 = local_20 + 1) {
    puVar3[local_20] = 0;
  }
  FUN_00103713(*puVar3);
  if (puVar3 != (undefined4 *)0x0) {
    operator_delete__(puVar3);
  }
  return;
}




undefined8 FUN_001027fa(undefined8 param_1)

{
  return param_1;
}




void FUN_00102ffb(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103200(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00101bb4(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101ef4(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103713(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




undefined8 FUN_00103cc3(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00103c8c,local_18);
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




void FUN_00101c04(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00101f16(param_2);
  *param_1 = *puVar1;
  return;
}




undefined8 FUN_00101a58(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void * FUN_001035ab(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 2;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 4);
  }
  return (void *)((long)param_3 + lVar1 * 4);
}




void FUN_00101cf8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_0010260e(param_2);
  FUN_001025bd(&local_31,uVar1);
  uVar1 = FUN_00102596(param_2);
                    /* try { // try from 00101d5e to 00101d62 has its CatchHandler @ 00101dcb */
  FUN_00102620(param_1,uVar1,&local_31);
  FUN_00101afa(&local_31);
  uVar2 = FUN_00101eb4(param_1);
  uVar1 = *param_1;
  uVar3 = FUN_001026de(param_2);
  uVar4 = FUN_00102686(param_2);
                    /* try { // try from 00101dac to 00101db0 has its CatchHandler @ 00101de9 */
  uVar1 = FUN_00102736(uVar4,uVar3,uVar1,uVar2);
  param_1[1] = uVar1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001032f7(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00102e96(param_1);
  uVar1 = FUN_0010347a(uVar1,param_2,param_3);
  FUN_0010310a(&local_10,uVar1);
  return;
}




void FUN_00102ccc(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




undefined8 FUN_00102d1c(undefined8 param_1)

{
  return param_1;
}




void FUN_00103c1e(void)

{
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00106ec8)();
  return;
}




undefined8 FUN_00102686(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_001027d8(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103517(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_0010360e(&local_10);
  FUN_00102e16(uVar1);
  return;
}




void FUN_00103c34(void)

{
  return;
}




void FUN_00101549(undefined8 param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  ulong local_20;
  
  piVar2 = (int *)FUN_0010167c(param_1,2);
  iVar1 = *piVar2;
  puVar3 = (undefined4 *)operator_new__((long)iVar1 << 2);
  for (local_20 = 0; local_20 < (ulong)(long)iVar1; local_20 = local_20 + 1) {
    puVar3[local_20] = 0;
  }
  FUN_00103713(*puVar3);
  if (puVar3 != (undefined4 *)0x0) {
    operator_delete__(puVar3);
  }
  return;
}




void FUN_00102b57(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102f9b(param_2);
  uVar2 = FUN_00102f9b(param_1);
  FUN_00102de1(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_00103c08(void)

{
  return;
}




void FUN_00101b1a(long *param_1)

{
  FUN_00101e7a(param_1,*param_1,param_1[2] - *param_1 >> 2);
  FUN_00101a6e(param_1);
  return;
}




void FUN_0010383d(undefined4 param_1)

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




void FUN_001031ba(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_00103392(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 << 2);
  return;
}




undefined8 FUN_00103b9d(void)

{
  return 0;
}




long FUN_00101f7f(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_001027fa(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_001027fa(param_2);
  return lVar1 - *plVar2 >> 2;
}




void FUN_00101a6e(undefined8 param_1)

{
  FUN_00101afa(param_1);
  return;
}




void FUN_0010342a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103517(param_2);
  uVar2 = FUN_00103517(param_1);
  FUN_0010353d(uVar2,uVar1,param_3);
  return;
}




long FUN_00102596(long *param_1)

{
  return param_1[1] - *param_1 >> 2;
}




void FUN_00102c06(undefined8 param_1,undefined8 param_2)

{
  FUN_00102bdc(param_1,param_2);
  FUN_00101e38(param_1);
  return;
}




void FUN_0010286c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102d06(param_1);
  FUN_00102d6b(*param_1,uVar1);
  return;
}




void FUN_0010276c(void)

{
  return;
}




void FUN_00103120(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001032f7(param_1,param_2,param_3);
  return;
}




void FUN_00103c81(void)

{
  return;
}




void FUN_00102ee2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103120(param_1,param_2,param_3);
  return;
}




void FUN_00103f60(void)

{
  return;
}




void FUN_00101e38(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




void FUN_00101ace(undefined8 param_1)

{
  FUN_00101e18(param_1);
  FUN_00101e38(param_1);
  return;
}




void FUN_00103200(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001033aa(param_2);
  uVar2 = FUN_001033aa(param_1);
  FUN_001033bc(uVar2,uVar1,param_3);
  return;
}




long FUN_001028be(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00101f16(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00101f16(param_2);
  return lVar1 - *plVar2 >> 2;
}




undefined8 FUN_00103b8e(void)

{
  return 1;
}




void FUN_001034e2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001035ab(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00102f9b(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00103082(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001036bb(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00102d2e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102d1c(param_3);
  FUN_0010302c(param_1,param_2,uVar1);
  return;
}




undefined4 * FUN_0010347a(undefined4 *param_1,long param_2,undefined4 *param_3)

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




undefined8 FUN_001026de(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(undefined8 *)(param_1 + 8);
  FUN_001027d8(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001016a0(void)

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
  FUN_00101aae(local_68);
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
                    /* try { // try from 001016f7 to 001017f2 has its CatchHandler @ 0010183e */
  pcVar1 = fgets(local_2e,0xe,stdin);
  if (pcVar1 == (char *)0x0) {
    FUN_001036bb("fgets() failed.");
  }
  else {
    local_74 = atoi(local_2e);
  }
  local_70 = FUN_00101bb4(local_68);
  FUN_00101c04(local_48,&local_70);
  FUN_00101c32(local_68,local_48[0],1,&local_74);
  local_70 = FUN_00101bb4(local_68);
  FUN_00101c04(local_48,&local_70);
  FUN_00101c32(local_68,local_48[0],1,&local_74);
  local_70 = FUN_00101bb4(local_68);
  FUN_00101c04(local_48,&local_70);
  FUN_00101c32(local_68,local_48[0],1,&local_74);
  FUN_00101cf8(local_48,local_68);
                    /* try { // try from 001017fa to 001017fe has its CatchHandler @ 00101829 */
  FUN_00101549(local_48);
  FUN_00101b6c(local_48);
  FUN_00101b6c(local_68);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101e18(undefined8 param_1)

{
  FUN_0010276c(param_1);
  return;
}




void FUN_001029aa(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102e96(param_2);
  uVar2 = FUN_00102e96(param_1);
  FUN_00102ea8(uVar2,uVar1,param_3);
  return;
}




void FUN_00103897(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_001037e7(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00103250(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010342a(param_1,param_2,param_3);
  return;
}




bool FUN_00103d90(pthread_t *param_1)

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




void FUN_00103345(undefined8 param_1)

{
  FUN_00103392(param_1);
  return;
}




undefined8 FUN_001034c1(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  puVar1 = (undefined8 *)FUN_001027fa(&local_10);
  return *puVar1;
}




void FUN_00103c60(void)

{
  return;
}




void FUN_00103bdc(void)

{
  return;
}




void FUN_001030d5(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103281(param_1,param_2,param_3);
  return;
}




undefined8 FUN_001024e4(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101ef4(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103bfd(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x001014e4) */
/* WARNING: Removing unreachable block (ram,0x001014f0) */

void FUN_001014c0(void)

{
  return;
}




void FUN_00102e28(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102e96(param_3);
  uVar2 = FUN_00102e96(local_28);
  uVar3 = FUN_00102e96(local_20);
  uVar1 = FUN_001030d5(uVar3,uVar2,uVar1);
  FUN_0010310a(&local_30,uVar1);
  return;
}




undefined8 FUN_0010360e(undefined8 *param_1)

{
  return *param_1;
}




ulong FUN_001039ab(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001040b8,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102f6d(undefined8 param_1,undefined8 param_2)

{
  FUN_001031ba(param_1,param_2,0);
  return;
}




void FUN_00101868(void)

{
  long in_FS_OFFSET;
  undefined4 local_64;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101aae(local_58);
  local_64 = 0x14;
  local_60 = FUN_00101bb4(local_58);
  FUN_00101c04(local_38,&local_60);
                    /* try { // try from 001018d8 to 0010196d has its CatchHandler @ 001019b9 */
  FUN_00101c32(local_58,local_38[0],1,&local_64);
  local_60 = FUN_00101bb4(local_58);
  FUN_00101c04(local_38,&local_60);
  FUN_00101c32(local_58,local_38[0],1,&local_64);
  local_60 = FUN_00101bb4(local_58);
  FUN_00101c04(local_38,&local_60);
  FUN_00101c32(local_58,local_38[0],1,&local_64);
  FUN_00101cf8(local_38,local_58);
                    /* try { // try from 00101975 to 00101979 has its CatchHandler @ 001019a4 */
  FUN_001015e2(local_38);
  FUN_00101b6c(local_38);
  FUN_00101b6c(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103c3f(void)

{
  return;
}




void FUN_001037bc(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00103bc6(void)

{
  return;
}




void FUN_00102c3c(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_00102b20(param_1,param_2);
  *param_1 = lVar1;
  param_1[1] = *param_1;
  param_1[2] = param_2 * 4 + *param_1;
  return;
}




void FUN_00102736(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102c96(param_1,param_2,param_3);
  return;
}




void FUN_00103082(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_00103c55(void)

{
  return;
}




undefined8 FUN_0010310a(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00102d6b(undefined8 param_1,undefined8 param_2)

{
  FUN_0010306e(param_1,param_2);
  return;
}




void FUN_00102fe8(void)

{
  return;
}




void FUN_001019e3(void)

{
  FUN_00101868();
  return;
}




void FUN_00101e6a(void)

{
  return;
}




void FUN_00103ef0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




/* WARNING: Removing unreachable block (ram,0x001014a3) */
/* WARNING: Removing unreachable block (ram,0x001014af) */

void FUN_00101490(void)

{
  return;
}




undefined8 FUN_0010260e(undefined8 param_1)

{
  return param_1;
}




void FUN_001038bf(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




int FUN_00103bac(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_001027ad(undefined8 param_1,undefined8 param_2)

{
  FUN_00102cf3(param_1,param_2);
  return;
}




void FUN_00103be7(void)

{
  return;
}




void FUN_00103c6b(void)

{
  return;
}




void FUN_001028a0(undefined8 param_1)

{
  FUN_00102d06(param_1);
  return;
}




void FUN_00101a8e(undefined8 param_1)

{
  FUN_00101ace(param_1);
  return;
}




void FUN_00102f18(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_0010260e(param_1);
  FUN_00103151(uVar1);
  return;
}




void FUN_001038ea(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_001036e1(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_0010353d(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102e96(param_3);
  uVar2 = FUN_00102e96(local_28);
  uVar3 = FUN_00102e96(local_20);
  uVar1 = FUN_00103623(uVar3,uVar2,uVar1);
  FUN_0010310a(&local_30,uVar1);
  return;
}




undefined8 FUN_00103deb(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00102ea8(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 *local_20;
  
  uVar1 = *param_3;
  for (local_20 = param_1; local_20 != param_2; local_20 = local_20 + 1) {
    *local_20 = uVar1;
  }
  return;
}




void * FUN_00103658(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 2;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 4);
  }
  return (void *)((long)param_3 + lVar1 * 4);
}




void FUN_0010306e(void)

{
  return;
}




undefined8 FUN_00102e16(undefined8 param_1)

{
  return param_1;
}




void FUN_0010280c(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar1 = FUN_00102d1c(param_3);
  uVar2 = FUN_00102d06(param_1);
  FUN_00102d2e(*param_1,uVar2,uVar1);
  return;
}




undefined8 FUN_00103392(void)

{
  return 0x1fffffffffffffff;
}




ulong FUN_00103aaf(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001040c0,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103623(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103658(param_1,param_2,param_3);
  return;
}




void FUN_00103791(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_001025bd(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102baf(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00103bd1(void)

{
  return;
}




void FUN_00103767(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00102c96(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102ffb(param_1,param_2,param_3);
  return;
}




void FUN_00101aae(undefined8 param_1)

{
  FUN_00101a8e(param_1);
  return;
}




void FUN_00102de1(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001030a0(param_1,param_2,param_3);
  return;
}




long FUN_00103281(void *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 2;
  if (lVar1 != 0) {
    memmove((void *)(lVar1 * -4 + param_3),param_1,lVar1 * 4);
  }
  return param_3 + lVar1 * -4;
}




void FUN_00101b6c(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101eb4(param_1);
  FUN_00101ec6(*param_1,param_1[1],uVar1);
  FUN_00101b1a(param_1);
  return;
}



