
ulong * FUN_001031c3(ulong *param_1,ulong *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}




void * FUN_0010340f(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




void FUN_00103d27(void)

{
  return;
}




void FUN_001037da(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_001033a1(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102cf0(param_3);
  uVar2 = FUN_00102cf0(local_28);
  uVar3 = FUN_00102cf0(local_20);
  uVar1 = FUN_00103487(uVar3,uVar2,uVar1);
  FUN_00102f6a(&local_30,uVar1);
  return;
}




undefined8 FUN_00102b76(undefined8 param_1)

{
  return param_1;
}




void FUN_00102ece(void)

{
  return;
}




undefined8 FUN_00102c70(undefined8 param_1)

{
  return param_1;
}




void FUN_00103c8d(void)

{
  return;
}




undefined8 FUN_00101d0e(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00101d70(undefined8 param_1)

{
  return param_1;
}




void FUN_00102e59(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103060(param_1,param_2,param_3);
  return;
}




void FUN_00101c72(undefined8 param_1)

{
  FUN_001025c6(param_1);
  return;
}




undefined8 FUN_00102417(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102a09(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




void FUN_00102e46(void)

{
  return;
}




void FUN_00102d76(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102468(param_1);
  FUN_00102fb1(uVar1);
  return;
}




void FUN_00102f00(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001030b0(param_1,param_2,param_3);
  return;
}




void FUN_0010351f(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
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
  puVar1 = (undefined8 *)FUN_0010375e(param_1,2);
  puVar1 = (undefined8 *)*puVar1;
  memset(&local_88,0x43,99);
  local_28 = local_28 & 0xffffff;
  *puVar1 = local_88;
  puVar1[1] = local_80;
  puVar1[2] = local_78;
  puVar1[3] = local_70;
  puVar1[4] = local_68;
  puVar1[5] = local_60;
  puVar1[6] = local_58;
  puVar1[7] = local_50;
  puVar1[8] = local_48;
  puVar1[9] = local_40;
  puVar1[10] = local_38;
  puVar1[0xb] = local_30;
  *(uint *)(puVar1 + 0xc) = local_28;
  *(undefined *)((long)puVar1 + 99) = 0;
  FUN_00103782(puVar1);
  if (puVar1 != (undefined8 *)0x0) {
    operator_delete__(puVar1);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_001038ae(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00102a60(undefined8 param_1,undefined8 param_2)

{
  FUN_00102a36(param_1,param_2);
  FUN_00101c92(param_1);
  return;
}




undefined8 FUN_001024e0(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_00102632(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00103472(undefined8 *param_1)

{
  return *param_1;
}




void FUN_00101928(undefined8 param_1)

{
  FUN_00101c72(param_1);
  FUN_00101c92(param_1);
  return;
}




undefined8 FUN_0010297a(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00102dcb(param_1,param_2);
  }
  return uVar1;
}




void FUN_00102804(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102cf0(param_2);
  uVar2 = FUN_00102cf0(param_1);
  FUN_00102d02(uVar2,uVar1,param_3);
  return;
}




undefined8 FUN_0010238a(long *param_1,long param_2)

{
  long in_FS_OFFSET;
  long local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1 + param_2 * 8;
  FUN_00101d4e(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




ulong FUN_00103a72(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_001050a8,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102dcb(undefined8 param_1,undefined8 param_2)

{
  FUN_0010301a(param_1,param_2,0);
  return;
}




void FUN_00103cda(void)

{
  return;
}




void FUN_00103d3d(void)

{
  return;
}




void FUN_00102590(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102af0(param_1,param_2,param_3);
  return;
}




void FUN_00103986(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_00103802(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




undefined8 FUN_00102fb1(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0xfffffffffffffff;
  local_18 = FUN_001031a5(param_1);
  puVar1 = (undefined8 *)FUN_001031c3(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}




undefined8 FUN_00103325(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  puVar1 = (undefined8 *)FUN_00102654(&local_10);
  return *puVar1;
}




void FUN_00103d48(void)

{
  return;
}




void FUN_00103346(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010340f(param_1,param_2,param_3);
  return;
}




void FUN_00103cae(void)

{
  return;
}




void * FUN_001034bc(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




ulong * FUN_00102d9c(ulong *param_1,ulong *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}




undefined8 FUN_00102df9(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102ee2(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101e1e(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

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
      local_68 = FUN_0010288a(param_1,param_3,"vector::_M_fill_insert");
      local_78 = FUN_0010233e(local_80);
      local_60 = FUN_00102718(&local_88,&local_78);
      local_70 = FUN_0010297a(local_80,local_68);
      local_58 = local_70;
      uVar1 = FUN_00101d0e(local_80);
                    /* try { // try from 00102128 to 001021b3 has its CatchHandler @ 0010226b */
      FUN_00102855(local_60 * 8 + local_58,param_3,param_4,uVar1);
      local_70 = 0;
      uVar1 = FUN_00101d0e(local_80);
      puVar2 = (undefined8 *)FUN_00101d70(&local_88);
      local_70 = FUN_001029b1(*local_80,*puVar2,local_58,uVar1);
      local_70 = local_70 + param_3 * 8;
      uVar1 = FUN_00101d0e(local_80);
      lVar4 = local_80[1];
      puVar2 = (undefined8 *)FUN_00101d70(&local_88);
      local_70 = FUN_001029b1(*puVar2,lVar4,local_70,uVar1);
      uVar1 = FUN_00101d0e(local_80);
      FUN_00101d20(*local_80,local_80[1],uVar1);
      FUN_00101cd4(local_80,*local_80,local_80[2] - *local_80 >> 3);
      *local_80 = local_58;
      local_80[1] = local_70;
      local_80[2] = local_68 * 8 + local_58;
    }
    else {
      FUN_00102666(local_38,param_1,param_4);
                    /* try { // try from 00101ea8 to 0010207b has its CatchHandler @ 0010224d */
      local_50 = FUN_001026fa(local_38);
      local_78 = FUN_00101a0e(local_80);
      local_48 = FUN_00102718(&local_78,&local_88);
      local_40 = local_80[1];
      if (param_3 < local_48) {
        uVar1 = FUN_00101d0e(local_80);
        FUN_0010275c(param_3 * -8 + local_80[1],local_80[1],local_80[1],uVar1);
        local_80[1] = param_3 * 8 + local_80[1];
        lVar4 = param_3 * -8 + local_40;
        puVar2 = (undefined8 *)FUN_00101d70(&local_88);
        FUN_001027b4(*puVar2,lVar4,local_40);
        plVar3 = (long *)FUN_00101d70(&local_88);
        lVar4 = *plVar3;
        puVar2 = (undefined8 *)FUN_00101d70(&local_88);
        FUN_00102804(*puVar2,lVar4 + param_3 * 8,local_50);
      }
      else {
        uVar1 = FUN_00101d0e(local_80);
        lVar4 = FUN_00102855(local_80[1],param_3 - local_48,local_50,uVar1);
        local_80[1] = lVar4;
        uVar1 = FUN_00101d0e(local_80);
        lVar4 = local_80[1];
        puVar2 = (undefined8 *)FUN_00101d70(&local_88);
        FUN_0010275c(*puVar2,local_40,lVar4,uVar1);
        local_80[1] = local_48 * 8 + local_80[1];
        puVar2 = (undefined8 *)FUN_00101d70(&local_88);
        FUN_00102804(*puVar2,local_40,local_50);
      }
      FUN_001026c6(local_38);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103157(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00102cf0(param_1);
  uVar1 = FUN_001032da(uVar1,param_2,param_3);
  FUN_00102f6a(&local_10,uVar1);
  return;
}




void FUN_00101529(void)

{
  long in_FS_OFFSET;
  undefined *local_68;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101908(local_58);
  local_68 = (undefined *)0x0;
                    /* try { // try from 0010155e to 0010163d has its CatchHandler @ 00101689 */
  local_68 = (undefined *)operator_new__(0x32);
  *local_68 = 0;
  local_60 = FUN_00101a0e(local_58);
  FUN_00101a5e(local_38,&local_60);
  FUN_00101a8c(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101a0e(local_58);
  FUN_00101a5e(local_38,&local_60);
  FUN_00101a8c(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101a0e(local_58);
  FUN_00101a5e(local_38,&local_60);
  FUN_00101a8c(local_58,local_38[0],1,&local_68);
  FUN_00101b52(local_38,local_58);
                    /* try { // try from 00101645 to 00101649 has its CatchHandler @ 00101674 */
  FUN_0010351f(local_38);
  FUN_001019c6(local_38);
  FUN_001019c6(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




ulong FUN_0010288a(undefined8 param_1,ulong param_2,char *param_3)

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
  lVar1 = FUN_00102d76(param_1);
  lVar2 = FUN_001023f0(local_40);
  if ((ulong)(lVar1 - lVar2) < local_48) {
    std::__throw_length_error(param_3);
  }
  lVar1 = FUN_001023f0(local_40);
  local_30 = FUN_001023f0(local_40);
  plVar3 = (long *)FUN_00102d9c(&local_30,&local_48);
  local_28 = *plVar3 + lVar1;
  uVar4 = FUN_001023f0(local_40);
  if ((local_28 < uVar4) || (uVar5 = FUN_00102d76(local_40), uVar4 = local_28, uVar5 < local_28)) {
    uVar4 = FUN_00102d76(local_40);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




undefined8 FUN_00101a0e(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101d4e(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_001031f2(void)

{
  return 0xfffffffffffffff;
}




int FUN_00103c73(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




undefined8 FUN_00102bef(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102ee2(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102c3b(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102f00(param_1,param_2,param_3);
  return;
}




void FUN_00102a96(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_0010297a(param_1,param_2);
  *param_1 = lVar1;
  param_1[1] = *param_1;
  param_1[2] = param_2 * 8 + *param_1;
  return;
}




void FUN_00103f6d(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00102c82(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102cf0(param_3);
  uVar2 = FUN_00102cf0(local_28);
  uVar3 = FUN_00102cf0(local_20);
  uVar1 = FUN_00102f35(uVar3,uVar2,uVar1);
  FUN_00102f6a(&local_30,uVar1);
  return;
}




void FUN_00103d11(void)

{
  return;
}




void FUN_001037a8(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00101954(undefined8 param_1)

{
  FUN_00101cc4(param_1);
  return;
}




void FUN_0010382e(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_001026fa(undefined8 param_1)

{
  FUN_00102b60(param_1);
  return;
}




void FUN_0010301a(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_001031f2(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 << 3);
  return;
}




undefined8 FUN_00103ed5(undefined8 *param_1)

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




void FUN_00102855(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102d40(param_1,param_2,param_3);
  return;
}




void FUN_00103487(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001034bc(param_1,param_2,param_3);
  return;
}




void FUN_00102b88(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102b76(param_3);
  FUN_00102e8a(param_1,param_2,uVar1);
  return;
}




void FUN_00103ce5(void)

{
  return;
}




void FUN_00102e8a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00102b76(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_001018b2(8,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_00102af0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102e59(param_1,param_2,param_3);
  return;
}




void FUN_001016b3(void)

{
  long in_FS_OFFSET;
  undefined *local_68;
  undefined8 local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101908(local_58);
  local_68 = (undefined *)0x0;
                    /* try { // try from 001016e8 to 001017c7 has its CatchHandler @ 00101813 */
  local_68 = (undefined *)operator_new__(100);
  *local_68 = 0;
  local_60 = FUN_00101a0e(local_58);
  FUN_00101a5e(local_38,&local_60);
  FUN_00101a8c(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101a0e(local_58);
  FUN_00101a5e(local_38,&local_60);
  FUN_00101a8c(local_58,local_38[0],1,&local_68);
  local_60 = FUN_00101a0e(local_58);
  FUN_00101a5e(local_38,&local_60);
  FUN_00101a8c(local_58,local_38[0],1,&local_68);
  FUN_00101b52(local_38,local_58);
                    /* try { // try from 001017cf to 001017d3 has its CatchHandler @ 001017fe */
  FUN_0010363e(local_38);
  FUN_001019c6(local_38);
  FUN_001019c6(local_58);
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00103d53(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00101b52(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_00102468(param_2);
  FUN_00102417(&local_31,uVar1);
  uVar1 = FUN_001023f0(param_2);
                    /* try { // try from 00101bb8 to 00101bbc has its CatchHandler @ 00101c25 */
  FUN_0010247a(param_1,uVar1,&local_31);
  FUN_00101954(&local_31);
  uVar2 = FUN_00101d0e(param_1);
  uVar1 = *param_1;
  uVar3 = FUN_00102538(param_2);
  uVar4 = FUN_001024e0(param_2);
                    /* try { // try from 00101c06 to 00101c0a has its CatchHandler @ 00101c43 */
  uVar1 = FUN_00102590(uVar4,uVar3,uVar1,uVar2);
  param_1[1] = uVar1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102f35(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001030e1(param_1,param_2,param_3);
  return;
}




void FUN_0010363e(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
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
  puVar1 = (undefined8 *)FUN_0010375e(param_1,2);
  puVar1 = (undefined8 *)*puVar1;
  memset(&local_88,0x43,99);
  local_28 = local_28 & 0xffffff;
  *puVar1 = local_88;
  puVar1[1] = local_80;
  puVar1[2] = local_78;
  puVar1[3] = local_70;
  puVar1[4] = local_68;
  puVar1[5] = local_60;
  puVar1[6] = local_58;
  puVar1[7] = local_50;
  puVar1[8] = local_48;
  puVar1[9] = local_40;
  puVar1[10] = local_38;
  puVar1[0xb] = local_30;
  *(uint *)(puVar1 + 0xc) = local_28;
  *(undefined *)((long)puVar1 + 99) = 0;
  FUN_00103782(puVar1);
  if (puVar1 != (undefined8 *)0x0) {
    operator_delete__(puVar1);
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010321c(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102cf0(param_3);
  uVar2 = FUN_00103325(local_28);
  uVar3 = FUN_00103325(local_20);
  uVar1 = FUN_00103346(uVar3,uVar2,uVar1);
  FUN_00102f6a(&local_30,uVar1);
  return;
}




long FUN_001030e1(void *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove((void *)(lVar1 * -8 + param_3),param_1,lVar1 * 8);
  }
  return param_3 + lVar1 * -8;
}




void FUN_00103ccf(void)

{
  return;
}




void _FINI_0(void)

{
  if (DAT_00108020 == '\0') {
    if (PTR___cxa_finalize_00107fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00108008);
    }
    FUN_00101470();
    DAT_00108020 = 1;
    return;
  }
  return;
}




void FUN_001018e8(undefined8 param_1)

{
  FUN_00101928(param_1);
  return;
}




void FUN_001039df(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_00101a8c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  local_20 = FUN_00101d82(param_1);
  local_18 = FUN_00101dd9(&local_38,&local_20);
  local_20 = FUN_0010233e(local_30);
  uVar1 = FUN_0010238a(&local_20,local_18);
  FUN_00101e1e(local_30,uVar1,param_3,param_4);
  local_20 = FUN_0010233e(local_30);
  FUN_0010238a(&local_20,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102d02(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *local_20;
  
  uVar1 = *param_3;
  for (local_20 = param_1; local_20 != param_2; local_20 = local_20 + 1) {
    *local_20 = uVar1;
  }
  return;
}




void FUN_0010247a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102a60(param_1,param_3);
                    /* try { // try from 001024b4 to 001024b8 has its CatchHandler @ 001024bb */
  FUN_00102a96(param_1,param_2);
  return;
}




/* WARNING: Removing unreachable block (ram,0x001014c4) */
/* WARNING: Removing unreachable block (ram,0x001014d0) */

void FUN_001014a0(void)

{
  return;
}




long FUN_00102b60(long param_1)

{
  return param_1 + 8;
}




void FUN_00103cf0(void)

{
  return;
}




undefined8 * FUN_001032da(undefined8 *param_1,long param_2,undefined8 *param_3)

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




void FUN_001018c8(undefined8 param_1)

{
  FUN_00101954(param_1);
  return;
}




void FUN_00101c92(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




undefined8 FUN_00103c55(void)

{
  return 1;
}




undefined8 FUN_00103eb2(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00103858(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_00103d8a(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00103d53,local_18);
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




void FUN_00103060(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010320a(param_2);
  uVar2 = FUN_0010320a(param_1);
  FUN_0010321c(uVar2,uVar1,param_3);
  return;
}




void FUN_001029b1(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102df9(param_2);
  uVar2 = FUN_00102df9(param_1);
  FUN_00102c3b(uVar2,uVar1,param_3,param_4);
  return;
}




undefined8 FUN_00102cf0(undefined8 param_1)

{
  return param_1;
}




void FUN_0010337b(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00103472(&local_10);
  FUN_00102c70(uVar1);
  return;
}




void FUN_001019c6(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101d0e(param_1);
  FUN_00101d20(*param_1,param_1[1],uVar1);
  FUN_00101974(param_1);
  return;
}




void FUN_001025d5(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102b26(param_1,param_2,param_3);
  return;
}




void FUN_00103cfb(void)

{
  return;
}




void FUN_00103d1c(void)

{
  return;
}




bool FUN_00103e57(pthread_t *param_1)

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




void FUN_001025c6(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101483) */
/* WARNING: Removing unreachable block (ram,0x0010148f) */

void FUN_00101470(void)

{
  return;
}




void FUN_00103cb9(void)

{
  return;
}




void FUN_0010183d(void)

{
  FUN_001016b3();
  return;
}




void FUN_00102ee2(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void FUN_001027b4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102c70(param_2);
  uVar2 = FUN_00102c70(param_1);
  FUN_00102c82(uVar2,uVar1,param_3);
  return;
}




void FUN_0010395e(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00103f8c(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




ulong FUN_00103b76(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_001050b0,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00102654(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102a09(undefined8 param_1,undefined8 param_2)

{
  FUN_00102a36(param_1,param_2);
  return param_1;
}




long FUN_0010375e(long *param_1,long param_2)

{
  return *param_1 + param_2 * 8;
}




void FUN_001030b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010328a(param_1,param_2,param_3);
  return;
}




void FUN_00103ca3(void)

{
  return;
}




void FUN_00102666(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar1 = FUN_00102b76(param_3);
  uVar2 = FUN_00102b60(param_1);
  FUN_00102b88(*param_1,uVar2,uVar1);
  return;
}




void FUN_00103cc4(void)

{
  return;
}




void FUN_00103883(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




undefined8 FUN_00103c64(void)

{
  return 0;
}




void FUN_00102a36(undefined8 param_1,undefined8 param_2)

{
  FUN_00102e46(param_1,param_2);
  return;
}




void FUN_00102d40(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102f80(param_1,param_2,param_3);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00107ed0)();
  return;
}




void FUN_0010275c(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102bef(param_2);
  uVar2 = FUN_00102bef(param_1);
  FUN_00102c3b(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_00102f80(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103157(param_1,param_2,param_3);
  return;
}




void FUN_001031a5(undefined8 param_1)

{
  FUN_001031f2(param_1);
  return;
}




void FUN_001026c6(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102b60(param_1);
  FUN_00102bc5(*param_1,uVar1);
  return;
}




void FUN_0010328a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_0010337b(param_2);
  uVar2 = FUN_0010337b(param_1);
  FUN_001033a1(uVar2,uVar1,param_3);
  return;
}




void FUN_00101908(undefined8 param_1)

{
  FUN_001018e8(param_1);
  return;
}




void FUN_00101a5e(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00101d70(param_2);
  *param_1 = *puVar1;
  return;
}




void FUN_00102b26(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00103a12(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




undefined8 FUN_0010184d(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00103782("Calling good()...");
  FUN_0010183d();
  FUN_00103782("Finished good()");
  FUN_00103782("Calling bad()...");
  FUN_00101529();
  FUN_00103782("Finished bad()");
  return 0;
}




void FUN_00102632(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00101974(long *param_1)

{
  FUN_00101cd4(param_1,*param_1,param_1[2] - *param_1 >> 3);
  FUN_001018c8(param_1);
  return;
}




void FUN_00103f4e(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_001039b1(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00104030(void)

{
  return;
}




void FUN_00103c98(void)

{
  return;
}




undefined8 FUN_00102468(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_00102538(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(undefined8 *)(param_1 + 8);
  FUN_00102632(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102607(undefined8 param_1,undefined8 param_2)

{
  FUN_00102b4d(param_1,param_2);
  return;
}




undefined8 FUN_001018b2(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00103904(undefined4 param_1)

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




undefined8 FUN_0010320a(undefined8 param_1)

{
  return param_1;
}




void FUN_00101d20(undefined8 param_1,undefined8 param_2)

{
  FUN_00102607(param_1,param_2);
  return;
}




void FUN_00103d32(void)

{
  return;
}




void FUN_00101cd4(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FUN_001025d5(param_1,param_2,param_3);
  }
  return;
}




undefined8 FUN_0010233e(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101d4e(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00103fc0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




undefined8 FUN_00102f6a(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




long FUN_00101dd9(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00102654(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00102654(param_2);
  return lVar1 - *plVar2 >> 3;
}




void FUN_00101cc4(void)

{
  return;
}




void FUN_00103782(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




undefined8 FUN_00101d82(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_00102632(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102b4d(void)

{
  return;
}




long FUN_00102718(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00101d70(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00101d70(param_2);
  return lVar1 - *plVar2 >> 3;
}




void FUN_00101d4e(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_001038d9(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00103d06(void)

{
  return;
}




long FUN_001023f0(long *param_1)

{
  return param_1[1] - *param_1 >> 3;
}




void FUN_00102bc5(undefined8 param_1,undefined8 param_2)

{
  FUN_00102ece(param_1,param_2);
  return;
}



