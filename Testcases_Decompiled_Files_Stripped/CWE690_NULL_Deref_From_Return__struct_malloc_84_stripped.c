
void FUN_0010186b(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101bbb(void)

{
  return;
}




void FUN_00101bd1(void)

{
  return;
}




void FUN_00101bdc(void)

{
  return;
}




void FUN_001014c2(long *param_1)

{
  if (*param_1 != 0) {
    *(undefined4 *)*param_1 = 1;
    *(undefined4 *)(*param_1 + 4) = 1;
    FUN_001018ec(*param_1);
    free((void *)*param_1);
  }
  return;
}




void FUN_0010159a(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(8);
                    /* try { // try from 001015c8 to 001015cc has its CatchHandler @ 001015f1 */
  FUN_0010148c(pvVar1,0);
  if (pvVar1 != (void *)0x0) {
    FUN_001014c2(pvVar1);
    operator_delete(pvVar1,8);
  }
  return;
}




void FUN_00101c3f(void)

{
  return;
}




void FUN_00101ed0(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00101c29(void)

{
  return;
}




undefined8 FUN_00101b62(void)

{
  return 1;
}




void FUN_0010140a(undefined8 *param_1,undefined8 param_2)

{
  void *pvVar1;
  
  *param_1 = param_2;
  pvVar1 = malloc(8);
  *param_1 = pvVar1;
  return;
}




void FUN_001016b5(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00101893(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




int FUN_00101b80(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00101c34(void)

{
  return;
}




void FUN_0010191f(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




void FUN_00101bf2(void)

{
  return;
}




void FUN_00101765(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101e99(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




/* WARNING: Removing unreachable block (ram,0x001013a4) */
/* WARNING: Removing unreachable block (ram,0x001013b0) */

void FUN_00101380(void)

{
  return;
}




void FUN_00101b9a(void)

{
  return;
}




void FUN_001016e7(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_0010168f(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101c60(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_0010161a(void)

{
  FUN_0010159a();
  return;
}




void FUN_00101be7(void)

{
  return;
}




void FUN_00101c55(void)

{
  return;
}




void FUN_00101440(long *param_1)

{
  *(undefined4 *)*param_1 = 1;
  *(undefined4 *)(*param_1 + 4) = 1;
  FUN_001018ec(*param_1);
  free((void *)*param_1);
  return;
}




void FUN_0010173b(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




void FUN_00101ba5(void)

{
  return;
}




void FUN_00101bc6(void)

{
  return;
}




void FUN_0010151a(void)

{
  void *pvVar1;
  
  pvVar1 = operator_new(8);
                    /* try { // try from 00101548 to 0010154c has its CatchHandler @ 00101571 */
  FUN_0010140a(pvVar1,0);
  if (pvVar1 != (void *)0x0) {
    FUN_00101440(pvVar1);
    operator_delete(pvVar1,8);
  }
  return;
}




void FUN_001017e6(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001018ec(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101363) */
/* WARNING: Removing unreachable block (ram,0x0010136f) */

void FUN_00101350(void)

{
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00103f18)();
  return;
}




void FUN_0010148c(undefined8 *param_1,undefined8 param_2)

{
  void *pvVar1;
  
  *param_1 = param_2;
  pvVar1 = malloc(8);
  *param_1 = pvVar1;
  return;
}




void FUN_00101e7a(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101bb0(void)

{
  return;
}




void FUN_00101c1e(void)

{
  return;
}




void FUN_00101e5b(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_00101f40(void)

{
  return;
}




void FUN_00101bfd(void)

{
  return;
}




void FUN_00101790(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101811(undefined4 param_1)

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




ulong FUN_00101a83(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_00102098,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101c08(void)

{
  return;
}




void FUN_00101c13(void)

{
  return;
}




void FUN_00101c4a(void)

{
  return;
}




ulong FUN_0010197f(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_00102090,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




undefined8 FUN_00101c97(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101c60,local_18);
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




bool FUN_00101d64(pthread_t *param_1)

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




void FUN_001018be(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void _FINI_0(void)

{
  if (DAT_00104020 == '\0') {
    if (PTR___cxa_finalize_00103fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00104008);
    }
    FUN_00101350();
    DAT_00104020 = 1;
    return;
  }
  return;
}




void FUN_0010170f(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_001017bb(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




undefined8 FUN_00101dbf(void *param_1)

{
  free(param_1);
  return 1;
}




undefined8 FUN_0010162a(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_0010168f("Calling good()...");
  FUN_0010161a();
  FUN_0010168f("Finished good()");
  FUN_0010168f("Calling bad()...");
  FUN_0010151a();
  FUN_0010168f("Finished bad()");
  return 0;
}




undefined8 FUN_00101de2(undefined8 *param_1)

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




undefined8 FUN_00101b71(void)

{
  return 0;
}



