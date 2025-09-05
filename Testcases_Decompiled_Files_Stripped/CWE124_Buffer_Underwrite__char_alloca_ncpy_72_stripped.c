
void FUN_0010340f(undefined8 param_1)

{
  FUN_0010345c(param_1);
  return;
}




void FUN_0010360b(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102f5a(param_3);
  uVar2 = FUN_00102f5a(local_28);
  uVar3 = FUN_00102f5a(local_20);
  uVar1 = FUN_001036f1(uVar3,uVar2,uVar1);
  FUN_001031d4(&local_30,uVar1);
  return;
}




void FUN_00103d44(void)

{
  return;
}




void FUN_00103835(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_001035e5(undefined8 param_1)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_001036dc(&local_10);
  FUN_00102eda(uVar1);
  return;
}




long FUN_00102dca(long param_1)

{
  return param_1 + 8;
}




void FUN_001030f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 *puVar2;
  
  puVar2 = (undefined8 *)FUN_00102de0(param_3);
  uVar1 = *puVar2;
  puVar2 = (undefined8 *)FUN_00101b1b(8,param_2);
  *puVar2 = uVar1;
  return;
}




void FUN_00102ea5(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010316a(param_1,param_2,param_3);
  return;
}




void FUN_00103caa(void)

{
  return;
}




void FUN_00101f3e(undefined8 param_1,long param_2,undefined8 param_3)

{
  if (param_2 != 0) {
    FUN_0010283f(param_1,param_2,param_3);
  }
  return;
}




void FUN_00101fb8(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_001030b0(void)

{
  return;
}




void FUN_00101dbc(undefined8 *param_1,undefined8 param_2)

{
  undefined8 uVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  long in_FS_OFFSET;
  undefined local_31;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar1 = FUN_001026d2(param_2);
  FUN_00102681(&local_31,uVar1);
  uVar1 = FUN_0010265a(param_2);
                    /* try { // try from 00101e22 to 00101e26 has its CatchHandler @ 00101e8f */
  FUN_001026e4(param_1,uVar1,&local_31);
  FUN_00101bbe(&local_31);
  uVar2 = FUN_00101f78(param_1);
  uVar1 = *param_1;
  uVar3 = FUN_001027a2(param_2);
  uVar4 = FUN_0010274a(param_2);
                    /* try { // try from 00101e70 to 00101e74 has its CatchHandler @ 00101ead */
  uVar1 = FUN_001027fa(uVar4,uVar3,uVar1,uVar2);
  param_1[1] = uVar1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




long FUN_0010265a(long *param_1)

{
  return param_1[1] - *param_1 >> 3;
}




undefined8 FUN_00103063(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010314c(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102faa(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001031ea(param_1,param_2,param_3);
  return;
}




void FUN_0010314c(undefined8 *param_1,undefined8 param_2)

{
  *param_1 = param_2;
  return;
}




void * FUN_00103726(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




void FUN_0010390b(undefined4 param_1)

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




void FUN_00102ca0(undefined8 param_1,undefined8 param_2)

{
  FUN_001030b0(param_1,param_2);
  return;
}




void FUN_001026e4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102cca(param_1,param_3);
                    /* try { // try from 0010271e to 00102722 has its CatchHandler @ 00102725 */
  FUN_00102d00(param_1,param_2);
  return;
}




void * FUN_00103679(void *param_1,long param_2,void *param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove(param_3,param_1,lVar1 * 8);
  }
  return (void *)((long)param_3 + lVar1 * 8);
}




void FUN_00101b72(undefined8 param_1)

{
  FUN_00101b52(param_1);
  return;
}




ulong FUN_00102af4(undefined8 param_1,ulong param_2,char *param_3)

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
  lVar1 = FUN_00102fe0(param_1);
  lVar2 = FUN_0010265a(local_40);
  if ((ulong)(lVar1 - lVar2) < local_48) {
    std::__throw_length_error(param_3);
  }
  lVar1 = FUN_0010265a(local_40);
  local_30 = FUN_0010265a(local_40);
  plVar3 = (long *)FUN_00103006(&local_30,&local_48);
  local_28 = *plVar3 + lVar1;
  uVar4 = FUN_0010265a(local_40);
  if ((local_28 < uVar4) || (uVar5 = FUN_00102fe0(local_40), uVar4 = local_28, uVar5 < local_28)) {
    uVar4 = FUN_00102fe0(local_40);
  }
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return uVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}




void FUN_00102a1e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102eda(param_2);
  uVar2 = FUN_00102eda(param_1);
  FUN_00102eec(uVar2,uVar1,param_3);
  return;
}




undefined8 FUN_001025a8(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101fb8(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00103c5c(void)

{
  return 1;
}




ulong * FUN_00103006(ulong *param_1,ulong *param_2)

{
  if (*param_1 < *param_2) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_00103cf7(void)

{
  return;
}




void FUN_00103d5a(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




undefined8 FUN_001027a2(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *(undefined8 *)(param_1 + 8);
  FUN_0010289c(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_001039e6(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_0010385f(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_001031ea(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001033c1(param_1,param_2,param_3);
  return;
}




undefined8 * FUN_00103544(undefined8 *param_1,long param_2,undefined8 *param_3)

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




undefined8 FUN_00103d91(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00103d5a,local_18);
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




undefined8 FUN_0010358f(undefined8 param_1)

{
  undefined8 *puVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  puVar1 = (undefined8 *)FUN_001028be(&local_10);
  return *puVar1;
}




void FUN_00103ccb(void)

{
  return;
}




void FUN_001036f1(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103726(param_1,param_2,param_3);
  return;
}




void FUN_00102fe0(undefined8 param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_001026d2(param_1);
  FUN_0010321b(uVar1);
  return;
}




void FUN_00103035(undefined8 param_1,undefined8 param_2)

{
  FUN_00103284(param_1,param_2,0);
  return;
}




long FUN_00102043(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_001028be(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_001028be(param_2);
  return lVar1 - *plVar2 >> 3;
}




long FUN_0010334b(void *param_1,long param_2,long param_3)

{
  long lVar1;
  
  lVar1 = param_2 - (long)param_1 >> 3;
  if (lVar1 != 0) {
    memmove((void *)(lVar1 * -8 + param_3),param_1,lVar1 * 8);
  }
  return param_3 + lVar1 * -8;
}




long FUN_0010164a(long *param_1,long param_2)

{
  return *param_1 + param_2 * 8;
}




void FUN_00102abf(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102faa(param_1,param_2,param_3);
  return;
}




void FUN_00101c30(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00101f78(param_1);
  FUN_00101f8a(*param_1,param_1[1],uVar1);
  FUN_00101bde(param_1);
  return;
}




ulong * FUN_0010342d(ulong *param_1,ulong *param_2)

{
  if (*param_2 < *param_1) {
    param_1 = param_2;
  }
  return param_1;
}




void FUN_00103c9f(void)

{
  return;
}




void FUN_00102e2f(undefined8 param_1,undefined8 param_2)

{
  FUN_00103138(param_1,param_2);
  return;
}




undefined8 FUN_00102e59(undefined8 param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_0010314c(&local_18,param_1);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102cca(undefined8 param_1,undefined8 param_2)

{
  FUN_00102ca0(param_1,param_2);
  FUN_00101efc(param_1);
  return;
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




undefined8 FUN_00102eda(undefined8 param_1)

{
  return param_1;
}




void FUN_00103d2e(void)

{
  return;
}




void FUN_00103809(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101b92(undefined8 param_1)

{
  FUN_00101edc(param_1);
  FUN_00101efc(param_1);
  return;
}




void FUN_0010388a(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00102930(undefined8 *param_1)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102dca(param_1);
  FUN_00102e2f(*param_1,uVar1);
  return;
}




undefined8 FUN_0010321b(undefined8 param_1)

{
  undefined8 *puVar1;
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = 0xfffffffffffffff;
  local_18 = FUN_0010340f(param_1);
  puVar1 = (undefined8 *)FUN_0010342d(&local_20,&local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return *puVar1;
}




void FUN_00103f74(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00102a6e(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102f5a(param_2);
  uVar2 = FUN_00102f5a(param_1);
  FUN_00102f6c(uVar2,uVar1,param_3);
  return;
}




undefined8 FUN_001036dc(undefined8 *param_1)

{
  return *param_1;
}




undefined8 FUN_00102de0(undefined8 param_1)

{
  return param_1;
}




void FUN_00103d02(void)

{
  return;
}




void FUN_001030c3(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001032ca(param_1,param_2,param_3);
  return;
}




void FUN_00102d00(long *param_1,long param_2)

{
  long lVar1;
  
  lVar1 = FUN_00102be4(param_1,param_2);
  *param_1 = lVar1;
  param_1[1] = *param_1;
  param_1[2] = param_2 * 8 + *param_1;
  return;
}




void FUN_0010166e(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  long in_FS_OFFSET;
  undefined auStack_78 [8];
  long local_70;
  undefined8 local_68;
  void *local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101b72(local_58);
  for (puVar2 = auStack_78; puVar2 != auStack_78; puVar2 = puVar2 + -0x1000) {
    *(undefined8 *)(puVar2 + -8) = *(undefined8 *)(puVar2 + -8);
  }
  *(undefined8 *)(puVar2 + -8) = *(undefined8 *)(puVar2 + -8);
  local_60 = (void *)((ulong)(puVar2 + -0x61) & 0xfffffffffffffff0);
  *(undefined8 *)(puVar2 + -0x78) = 0x101731;
  memset((void *)((ulong)(puVar2 + -0x61) & 0xfffffffffffffff0),0x41,99);
  *(undefined *)((long)local_60 + 99) = 0;
  local_70 = (long)local_60 + -8;
  *(undefined8 *)(puVar2 + -0x78) = 0x101754;
  local_68 = FUN_00101c78(local_58);
  *(undefined8 *)(puVar2 + -0x78) = 0x10176b;
  FUN_00101cc8(local_38,&local_68);
  uVar1 = local_38[0];
                    /* try { // try from 00101782 to 00101817 has its CatchHandler @ 00101863 */
  *(undefined8 *)(puVar2 + -0x78) = 0x101787;
  FUN_00101cf6(local_58,uVar1,1,&local_70);
  *(undefined8 *)(puVar2 + -0x78) = 0x101793;
  local_68 = FUN_00101c78(local_58);
  *(undefined8 *)(puVar2 + -0x78) = 0x1017aa;
  FUN_00101cc8(local_38,&local_68);
  uVar1 = local_38[0];
  *(undefined8 *)(puVar2 + -0x78) = 0x1017c6;
  FUN_00101cf6(local_58,uVar1,1,&local_70);
  *(undefined8 *)(puVar2 + -0x78) = 0x1017d2;
  local_68 = FUN_00101c78(local_58);
  *(undefined8 *)(puVar2 + -0x78) = 0x1017e9;
  FUN_00101cc8(local_38,&local_68);
  *(undefined8 *)(puVar2 + -0x78) = 0x101805;
  FUN_00101cf6(local_58,local_38[0],1,&local_70);
  *(undefined8 *)(puVar2 + -0x78) = 0x101818;
  FUN_00101dbc(local_38,local_58);
                    /* try { // try from 0010181f to 00101823 has its CatchHandler @ 0010184e */
  *(undefined8 *)(puVar2 + -0x78) = 0x101824;
  FUN_00101509(local_38);
  *(undefined8 *)(puVar2 + -0x78) = 0x101830;
  FUN_00101c30(local_38);
  *(undefined8 *)(puVar2 + -0x78) = 0x10183c;
  FUN_00101c30(local_58);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)(puVar2 + -0x78) = 0x101886;
  __stack_chk_fail();
}




bool FUN_00103e5e(pthread_t *param_1)

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




void FUN_00101cf6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

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
  local_20 = FUN_00101fec(param_1);
  local_18 = FUN_00102043(&local_38,&local_20);
  local_20 = FUN_001025a8(local_30);
  uVar1 = FUN_001025f4(&local_20,local_18);
  FUN_00102088(local_30,uVar1,param_3,param_4);
  local_20 = FUN_001025a8(local_30);
  FUN_001025f4(&local_20,local_18);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010316a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010331a(param_1,param_2,param_3);
  return;
}




void FUN_00103789(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




undefined8 FUN_00103474(undefined8 param_1)

{
  return param_1;
}




void FUN_0010331a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001034f4(param_1,param_2,param_3);
  return;
}




void FUN_00103cec(void)

{
  return;
}




void FUN_001015a9(undefined8 param_1)

{
  char *__dest;
  undefined8 *puVar1;
  long in_FS_OFFSET;
  char local_78 [99];
  undefined local_15;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_0010164a(param_1,2);
  __dest = (char *)*puVar1;
  memset(local_78,0x43,99);
  local_15 = 0;
  strncpy(__dest,local_78,99);
  __dest[99] = '\0';
  FUN_00103789(__dest);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00101b32(undefined8 param_1)

{
  FUN_00101bbe(param_1);
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00107ed8)();
  return;
}




ulong FUN_00103a79(long param_1,ulong param_2,long param_3)

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




void FUN_00101cc8(undefined8 *param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00101fda(param_2);
  *param_1 = *puVar1;
  return;
}




undefined8 FUN_00102f5a(undefined8 param_1)

{
  return param_1;
}




undefined8 FUN_001026d2(undefined8 param_1)

{
  return param_1;
}




void FUN_00101509(undefined8 param_1)

{
  char *__dest;
  undefined8 *puVar1;
  long in_FS_OFFSET;
  char local_78 [99];
  undefined local_15;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  puVar1 = (undefined8 *)FUN_0010164a(param_1,2);
  __dest = (char *)*puVar1;
  memset(local_78,0x43,99);
  local_15 = 0;
  strncpy(__dest,local_78,99);
  __dest[99] = '\0';
  FUN_00103789(__dest);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_00102db7(void)

{
  return;
}




void FUN_00103d0d(void)

{
  return;
}




void FUN_001034f4(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_001035e5(param_2);
  uVar2 = FUN_001035e5(param_1);
  FUN_0010360b(uVar2,uVar1,param_3);
  return;
}




undefined8 FUN_00101b1b(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_00101edc(undefined8 param_1)

{
  FUN_00102830(param_1);
  return;
}




int FUN_00103c7a(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00103f55(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_001038b5(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




undefined8 FUN_00103eb9(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_00103284(undefined8 param_1,ulong param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_0010345c(param_1);
  if (uVar1 < param_2) {
    std::__throw_bad_alloc();
  }
  operator_new(param_2 << 3);
  return;
}




undefined8 FUN_00102be4(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  
  if (param_2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = FUN_00103035(param_1,param_2);
  }
  return uVar1;
}




void FUN_00102eec(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102f5a(param_3);
  uVar2 = FUN_00102f5a(local_28);
  uVar3 = FUN_00102f5a(local_20);
  uVar1 = FUN_0010319f(uVar3,uVar2,uVar1);
  FUN_001031d4(&local_30,uVar1);
  return;
}




void FUN_001035b0(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00103679(param_1,param_2,param_3);
  return;
}




void FUN_00101bde(long *param_1)

{
  FUN_00101f3e(param_1,*param_1,param_1[2] - *param_1 >> 3);
  FUN_00101b32(param_1);
  return;
}




void FUN_00102830(void)

{
  return;
}




void FUN_00103d18(void)

{
  return;
}




void FUN_00103d39(void)

{
  return;
}




undefined8 FUN_00103edc(undefined8 *param_1)

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




void FUN_001027fa(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102d5a(param_1,param_2,param_3);
  return;
}




void _FINI_0(void)

{
  if (DAT_00108020 == '\0') {
    if (PTR___cxa_finalize_00107fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00108008);
    }
    FUN_00101450();
    DAT_00108020 = 1;
    return;
  }
  return;
}




void FUN_00103cd6(void)

{
  return;
}




void FUN_0010188c(void)

{
  undefined8 uVar1;
  undefined *puVar2;
  long in_FS_OFFSET;
  undefined auStack_78 [8];
  void *local_70;
  undefined8 local_68;
  void *local_60;
  undefined local_58 [32];
  undefined8 local_38 [3];
  long local_20;
  
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101b72(local_58);
  for (puVar2 = auStack_78; puVar2 != auStack_78; puVar2 = puVar2 + -0x1000) {
    *(undefined8 *)(puVar2 + -8) = *(undefined8 *)(puVar2 + -8);
  }
  *(undefined8 *)(puVar2 + -8) = *(undefined8 *)(puVar2 + -8);
  local_60 = (void *)((ulong)(puVar2 + -0x61) & 0xfffffffffffffff0);
  *(undefined8 *)(puVar2 + -0x78) = 0x10194f;
  memset((void *)((ulong)(puVar2 + -0x61) & 0xfffffffffffffff0),0x41,99);
  *(undefined *)((long)local_60 + 99) = 0;
  local_70 = local_60;
  *(undefined8 *)(puVar2 + -0x78) = 0x10196e;
  local_68 = FUN_00101c78(local_58);
  *(undefined8 *)(puVar2 + -0x78) = 0x101985;
  FUN_00101cc8(local_38,&local_68);
  uVar1 = local_38[0];
                    /* try { // try from 0010199c to 00101a31 has its CatchHandler @ 00101a7d */
  *(undefined8 *)(puVar2 + -0x78) = 0x1019a1;
  FUN_00101cf6(local_58,uVar1,1,&local_70);
  *(undefined8 *)(puVar2 + -0x78) = 0x1019ad;
  local_68 = FUN_00101c78(local_58);
  *(undefined8 *)(puVar2 + -0x78) = 0x1019c4;
  FUN_00101cc8(local_38,&local_68);
  uVar1 = local_38[0];
  *(undefined8 *)(puVar2 + -0x78) = 0x1019e0;
  FUN_00101cf6(local_58,uVar1,1,&local_70);
  *(undefined8 *)(puVar2 + -0x78) = 0x1019ec;
  local_68 = FUN_00101c78(local_58);
  *(undefined8 *)(puVar2 + -0x78) = 0x101a03;
  FUN_00101cc8(local_38,&local_68);
  *(undefined8 *)(puVar2 + -0x78) = 0x101a1f;
  FUN_00101cf6(local_58,local_38[0],1,&local_70);
  *(undefined8 *)(puVar2 + -0x78) = 0x101a32;
  FUN_00101dbc(local_38,local_58);
                    /* try { // try from 00101a39 to 00101a3d has its CatchHandler @ 00101a68 */
  *(undefined8 *)(puVar2 + -0x78) = 0x101a3e;
  FUN_001015a9(local_38);
  *(undefined8 *)(puVar2 + -0x78) = 0x101a4a;
  FUN_00101c30(local_38);
  *(undefined8 *)(puVar2 + -0x78) = 0x101a56;
  FUN_00101c30(local_58);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  *(undefined8 *)(puVar2 + -0x78) = 0x101aa0;
  __stack_chk_fail();
}




void FUN_00103138(void)

{
  return;
}




void FUN_001029c6(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00102e59(param_2);
  uVar2 = FUN_00102e59(param_1);
  FUN_00102ea5(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_001039b8(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00104030(void)

{
  return;
}




undefined8 FUN_00103c6b(void)

{
  return 0;
}




void FUN_0010289c(undefined8 *param_1,undefined8 *param_2)

{
  *param_1 = *param_2;
  return;
}




void FUN_00102c1b(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103063(param_2);
  uVar2 = FUN_00103063(param_1);
  FUN_00102ea5(uVar2,uVar1,param_3,param_4);
  return;
}




void FUN_001037af(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_001032ca(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  uVar1 = FUN_00103474(param_2);
  uVar2 = FUN_00103474(param_1);
  FUN_00103486(uVar2,uVar1,param_3);
  return;
}




void FUN_00103cc0(void)

{
  return;
}




undefined8 FUN_001028be(undefined8 param_1)

{
  return param_1;
}




void FUN_00103ce1(void)

{
  return;
}




void FUN_001038e0(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x001014a4) */
/* WARNING: Removing unreachable block (ram,0x001014b0) */

void FUN_00101480(void)

{
  return;
}




undefined8 FUN_00102c73(undefined8 param_1,undefined8 param_2)

{
  FUN_00102ca0(param_1,param_2);
  return param_1;
}




void FUN_00102f6c(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  undefined8 uVar1;
  undefined8 *local_20;
  
  uVar1 = *param_3;
  for (local_20 = param_1; local_20 != param_2; local_20 = local_20 + 1) {
    *local_20 = uVar1;
  }
  return;
}




void FUN_00103c94(void)

{
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101463) */
/* WARNING: Removing unreachable block (ram,0x0010146f) */

void FUN_00101450(void)

{
  return;
}




long FUN_00102982(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long *plVar2;
  
  plVar2 = (long *)FUN_00101fda(param_1);
  lVar1 = *plVar2;
  plVar2 = (long *)FUN_00101fda(param_2);
  return lVar1 - *plVar2 >> 3;
}




undefined8 FUN_001031d4(undefined8 param_1,undefined8 param_2)

{
  return param_2;
}




void FUN_001033c1(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = param_1;
  uVar1 = FUN_00102f5a(param_1);
  uVar1 = FUN_00103544(uVar1,param_2,param_3);
  FUN_001031d4(&local_10,uVar1);
  return;
}




void FUN_001028d0(undefined8 *param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  undefined8 uVar2;
  
  *param_1 = param_2;
  uVar1 = FUN_00102de0(param_3);
  uVar2 = FUN_00102dca(param_1);
  FUN_00102df2(*param_1,uVar2,uVar1);
  return;
}




void FUN_00103486(undefined8 param_1,undefined8 param_2,undefined8 param_3)

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
  uVar1 = FUN_00102f5a(param_3);
  uVar2 = FUN_0010358f(local_28);
  uVar3 = FUN_0010358f(local_20);
  uVar1 = FUN_001035b0(uVar3,uVar2,uVar1);
  FUN_001031d4(&local_30,uVar1);
  return;
}




void FUN_00101b52(undefined8 param_1)

{
  FUN_00101b92(param_1);
  return;
}




undefined8 FUN_00101c78(long param_1)

{
  long in_FS_OFFSET;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00101fb8(&local_18,param_1 + 8);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102d5a(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_001030c3(param_1,param_2,param_3);
  return;
}




ulong FUN_00103b7d(long param_1,ulong param_2,long param_3)

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




void FUN_00101aa6(void)

{
  FUN_0010188c();
  return;
}




void FUN_00102871(undefined8 param_1,undefined8 param_2)

{
  FUN_00102db7(param_1,param_2);
  return;
}




void FUN_00101bbe(undefined8 param_1)

{
  FUN_00101f2e(param_1);
  return;
}




void FUN_00103f93(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




void FUN_00103a19(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00103cb5(void)

{
  return;
}




undefined8 FUN_00102681(undefined8 param_1,undefined8 param_2)

{
  long lVar1;
  long in_FS_OFFSET;
  
  lVar1 = *(long *)(in_FS_OFFSET + 0x28);
  FUN_00102c73(param_1,param_2);
  if (lVar1 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
}




undefined8 FUN_0010274a(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_0010289c(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_0010283f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_00102d90(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00101ab6(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_00103789("Calling good()...");
  FUN_00101aa6();
  FUN_00103789("Finished good()");
  FUN_00103789("Calling bad()...");
  FUN_0010166e();
  FUN_00103789("Finished bad()");
  return 0;
}




void FUN_0010398d(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




undefined8 FUN_0010345c(void)

{
  return 0xfffffffffffffff;
}




undefined8 FUN_00101f78(undefined8 param_1)

{
  return param_1;
}




void FUN_00103d4f(void)

{
  return;
}




void FUN_00101f2e(void)

{
  return;
}




void FUN_00102088(long *param_1,undefined8 param_2,ulong param_3,undefined8 param_4)

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
      local_68 = FUN_00102af4(param_1,param_3,"vector::_M_fill_insert");
      local_78 = FUN_001025a8(local_80);
      local_60 = FUN_00102982(&local_88,&local_78);
      local_70 = FUN_00102be4(local_80,local_68);
      local_58 = local_70;
      uVar1 = FUN_00101f78(local_80);
                    /* try { // try from 00102392 to 0010241d has its CatchHandler @ 001024d5 */
      FUN_00102abf(local_60 * 8 + local_58,param_3,param_4,uVar1);
      local_70 = 0;
      uVar1 = FUN_00101f78(local_80);
      puVar2 = (undefined8 *)FUN_00101fda(&local_88);
      local_70 = FUN_00102c1b(*local_80,*puVar2,local_58,uVar1);
      local_70 = local_70 + param_3 * 8;
      uVar1 = FUN_00101f78(local_80);
      lVar4 = local_80[1];
      puVar2 = (undefined8 *)FUN_00101fda(&local_88);
      local_70 = FUN_00102c1b(*puVar2,lVar4,local_70,uVar1);
      uVar1 = FUN_00101f78(local_80);
      FUN_00101f8a(*local_80,local_80[1],uVar1);
      FUN_00101f3e(local_80,*local_80,local_80[2] - *local_80 >> 3);
      *local_80 = local_58;
      local_80[1] = local_70;
      local_80[2] = local_68 * 8 + local_58;
    }
    else {
      FUN_001028d0(local_38,param_1,param_4);
                    /* try { // try from 00102112 to 001022e5 has its CatchHandler @ 001024b7 */
      local_50 = FUN_00102964(local_38);
      local_78 = FUN_00101c78(local_80);
      local_48 = FUN_00102982(&local_78,&local_88);
      local_40 = local_80[1];
      if (param_3 < local_48) {
        uVar1 = FUN_00101f78(local_80);
        FUN_001029c6(param_3 * -8 + local_80[1],local_80[1],local_80[1],uVar1);
        local_80[1] = param_3 * 8 + local_80[1];
        lVar4 = param_3 * -8 + local_40;
        puVar2 = (undefined8 *)FUN_00101fda(&local_88);
        FUN_00102a1e(*puVar2,lVar4,local_40);
        plVar3 = (long *)FUN_00101fda(&local_88);
        lVar4 = *plVar3;
        puVar2 = (undefined8 *)FUN_00101fda(&local_88);
        FUN_00102a6e(*puVar2,lVar4 + param_3 * 8,local_50);
      }
      else {
        uVar1 = FUN_00101f78(local_80);
        lVar4 = FUN_00102abf(local_80[1],param_3 - local_48,local_50,uVar1);
        local_80[1] = lVar4;
        uVar1 = FUN_00101f78(local_80);
        lVar4 = local_80[1];
        puVar2 = (undefined8 *)FUN_00101fda(&local_88);
        FUN_001029c6(*puVar2,local_40,lVar4,uVar1);
        local_80[1] = local_48 * 8 + local_80[1];
        puVar2 = (undefined8 *)FUN_00101fda(&local_88);
        FUN_00102a6e(*puVar2,local_40,local_50);
      }
      FUN_00102930(local_38);
    }
  }
  if (local_20 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}




void FUN_0010319f(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  FUN_0010334b(param_1,param_2,param_3);
  return;
}




undefined8 FUN_00101fec(undefined8 *param_1)

{
  long in_FS_OFFSET;
  undefined8 local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1;
  FUN_0010289c(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101efc(undefined8 *param_1)

{
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}




void FUN_001037e1(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




undefined8 FUN_00101fda(undefined8 param_1)

{
  return param_1;
}




void FUN_00102d90(undefined8 param_1,void *param_2)

{
  operator_delete(param_2);
  return;
}




void FUN_00102964(undefined8 param_1)

{
  FUN_00102dca(param_1);
  return;
}




void FUN_00101f8a(undefined8 param_1,undefined8 param_2)

{
  FUN_00102871(param_1,param_2);
  return;
}




void FUN_00103965(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00103d23(void)

{
  return;
}




undefined8 FUN_001025f4(long *param_1,long param_2)

{
  long in_FS_OFFSET;
  long local_20;
  undefined8 local_18;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_20 = *param_1 + param_2 * 8;
  FUN_00101fb8(&local_18,&local_20);
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00102df2(undefined8 param_1,undefined8 param_2,undefined8 param_3)

{
  undefined8 uVar1;
  
  uVar1 = FUN_00102de0(param_3);
  FUN_001030f4(param_1,param_2,uVar1);
  return;
}



