
/* WARNING: Removing unreachable block (ram,0x001013a4) */
/* WARNING: Removing unreachable block (ram,0x001013b0) */

void FUN_00101380(void)

{
  return;
}




void FUN_00101f18(pthread_mutex_t *param_1)

{
  pthread_mutex_unlock(param_1);
  return;
}




void FUN_00101409(void)

{
  void *__ptr;
  undefined8 *puVar1;
  
  __ptr = malloc(400);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  puVar1 = (undefined8 *)operator_new(8);
  FUN_00101648(puVar1);
  (**(code **)*puVar1)(puVar1,__ptr);
  if (puVar1 != (undefined8 *)0x0) {
    operator_delete(puVar1,8);
  }
  return;
}




void FUN_0010149a(void)

{
  void *pvVar1;
  undefined8 *puVar2;
  
  pvVar1 = malloc(400);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  puVar2 = (undefined8 *)operator_new(8);
  FUN_00101676(puVar2);
  (**(code **)*puVar2)(puVar2,pvVar1);
  if (puVar2 != (undefined8 *)0x0) {
    operator_delete(puVar2,8);
  }
  return;
}




void FUN_001016f6(undefined8 param_1,void *param_2)

{
  free(param_2);
  return;
}




void FUN_00101ca6(void)

{
  return;
}




void FUN_001018af(undefined4 param_1)

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




void FUN_001016a4(undefined8 *param_1)

{
  FUN_0010162a(param_1);
  *param_1 = &PTR_FUN_00104c80;
  return;
}




void FUN_00101cfe(long param_1)

{
  (**(code **)(param_1 + 8))(*(undefined8 *)(param_1 + 0x10));
                    /* WARNING: Subroutine does not return */
  pthread_exit((void *)0x0);
}




void FUN_00101c4e(void)

{
  return;
}




int FUN_00101c1e(void)

{
  int iVar1;
  
  iVar1 = rand();
  return iVar1 % 2;
}




void FUN_00101c9b(void)

{
  return;
}




undefined8 FUN_00101e80(undefined8 *param_1)

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




void FUN_0010198a(uint *param_1)

{
  printf("%d -- %d\n",(ulong)*param_1,(ulong)param_1[1]);
  return;
}




void FUN_001016d2(undefined8 param_1,void *param_2)

{
  free(param_2);
  return;
}




void FUN_00101cdd(void)

{
  return;
}




void FUN_001015b0(void)

{
  FUN_0010149a();
  FUN_0010151f();
  return;
}




ulong FUN_00101a1d(long param_1,ulong param_2,long param_3)

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
    __isoc99_sscanf(local_18 * 2 + param_3,&DAT_00102224,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101c85(void)

{
  return;
}




void FUN_00101c64(void)

{
  return;
}




void FUN_00101884(char param_1)

{
  printf("%02x\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101c38(void)

{
  return;
}




void FUN_00101020(void)

{
  (*(code *)PTR_00104f18)();
  return;
}




void FUN_00101753(long param_1)

{
  if (param_1 != 0) {
    wprintf(L"%ls\n",param_1);
  }
  return;
}




void FUN_00101c7a(void)

{
  return;
}




undefined8 FUN_00101d35(pthread_t param_1,pthread_t param_2,undefined8 *param_3)

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
    iVar1 = pthread_create(&local_20,(pthread_attr_t *)0x0,FUN_00101cfe,local_18);
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




void FUN_00101f70(undefined4 param_1,undefined8 param_2,undefined8 param_3)

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




void FUN_00101ce8(void)

{
  return;
}




void FUN_0010151f(void)

{
  void *__ptr;
  undefined8 *puVar1;
  
  __ptr = malloc(400);
  if (__ptr == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    exit(-1);
  }
  free(__ptr);
  puVar1 = (undefined8 *)operator_new(8);
  FUN_001016a4(puVar1);
  (**(code **)*puVar1)(puVar1,__ptr);
  if (puVar1 != (undefined8 *)0x0) {
    operator_delete(puVar1,8);
  }
  return;
}




void FUN_0010172d(char *param_1)

{
  if (param_1 != (char *)0x0) {
    puts(param_1);
  }
  return;
}




void FUN_00101cbc(void)

{
  return;
}




void FUN_00101cb1(void)

{
  return;
}




bool FUN_00101e02(pthread_t *param_1)

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




void FUN_00101fe0(void)

{
  return;
}




void _FINI_0(void)

{
  if (DAT_00105018 == '\0') {
    if (PTR___cxa_finalize_00104fd8 != (undefined *)0x0) {
      __cxa_finalize(PTR_LOOP_00105008);
    }
    FUN_00101350();
    DAT_00105018 = 1;
    return;
  }
  return;
}




void FUN_00101cd2(void)

{
  return;
}




void FUN_00101c43(void)

{
  return;
}




void FUN_00101cc7(void)

{
  return;
}




undefined8 FUN_00101c0f(void)

{
  return 0;
}




void FUN_00101859(undefined8 param_1)

{
  printf("%zu\n",param_1);
  return;
}




void FUN_00101676(undefined8 *param_1)

{
  FUN_0010162a(param_1);
  *param_1 = &PTR_FUN_00104c68;
  return;
}




/* WARNING: Removing unreachable block (ram,0x00101363) */
/* WARNING: Removing unreachable block (ram,0x0010136f) */

void FUN_00101350(void)

{
  return;
}




void FUN_00101ef9(pthread_mutex_t *param_1)

{
  pthread_mutex_lock(param_1);
  return;
}




void FUN_0010182e(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}




void FUN_00101909(uint param_1)

{
  printf("%u\n",(ulong)param_1);
  return;
}




void FUN_00101c6f(void)

{
  return;
}




void FUN_00101f37(pthread_mutex_t *param_1)

{
  pthread_mutex_destroy(param_1);
  free(param_1);
  return;
}




undefined8 FUN_001015c5(void)

{
  time_t tVar1;
  
  tVar1 = time((time_t *)0x0);
  srand((uint)tVar1);
  FUN_0010172d("Calling good()...");
  FUN_001015b0();
  FUN_0010172d("Finished good()");
  FUN_0010172d("Calling bad()...");
  FUN_00101409();
  FUN_0010172d("Finished bad()");
  return 0;
}




void FUN_00101931(byte param_1)

{
  printf("%02x\n",(ulong)param_1);
  return;
}




void FUN_0010171a(void)

{
  return;
}




void FUN_0010162a(undefined8 *param_1)

{
  *param_1 = &PTR___cxa_pure_virtual_00104c98;
  return;
}




void FUN_00101648(undefined8 *param_1)

{
  FUN_0010162a(param_1);
  *param_1 = &PTR_FUN_00104c50;
  return;
}




void FUN_00101785(uint param_1)

{
  printf("%d\n",(ulong)param_1);
  return;
}




void FUN_0010195c(undefined8 param_1)

{
  printf("%g\n",param_1);
  return;
}




void FUN_00101c90(void)

{
  return;
}




void FUN_001017ad(short param_1)

{
  printf("%hd\n",(ulong)(uint)(int)param_1);
  return;
}




void FUN_00101cf3(void)

{
  return;
}




undefined8 FUN_00101c00(void)

{
  return 1;
}




void FUN_001019bd(long param_1,ulong param_2)

{
  ulong local_10;
  
  for (local_10 = 0; local_10 < param_2; local_10 = local_10 + 1) {
    printf("%02x",(ulong)*(byte *)(local_10 + param_1));
  }
  puts("");
  return;
}




undefined8 FUN_00101e5d(void *param_1)

{
  free(param_1);
  return 1;
}




void FUN_001017d9(float param_1)

{
  printf("%f\n",(double)param_1);
  return;
}




ulong FUN_00101b21(long param_1,ulong param_2,long param_3)

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
    __isoc99_swscanf(local_18 * 8 + param_3,&DAT_0010222c,local_1c);
    *(char *)(local_18 + param_1) = local_1c[0];
  }
  if (local_10 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return local_18;
}




void FUN_00101c59(void)

{
  return;
}




void FUN_00101803(undefined8 param_1)

{
  printf("%ld\n",param_1);
  return;
}



